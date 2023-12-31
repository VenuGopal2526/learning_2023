/*
 Data Viewer:
Write an application to view the log stored in data.csv
Example, say you have the following data in data.csv

------------------------------------

EntryNo,sensorNo,Temperature,Humidity,Light,

1,S1,36.5,100,50,10:30:50
2,S3,30,100,50,10:30:55
3,S2,-6.6,100,10,10:31:00
------------------------------------

a. Write a function to extract each line in the .csv file and store it in an array of structures. 

b. Also implement functions to display the contents of the array of structures.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100

typedef struct {
    int entryNo;
    char sensorNo[3];
    float temperature;
    int humidity;
    int light;
    char time[9];
} LogEntry;

LogEntry logEntries[MAX_ENTRIES];
int numEntries = 0;

void extractData(const char* filename) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("Failed to open file %s\n", filename);
        return;
    }

    char line[100];
    while (fgets(line, sizeof(line), file) != NULL) {
        if (numEntries >= MAX_ENTRIES) {
            printf("Max number of entries reached\n");
            break;
        }

        char* token = strtok(line, ",");
        logEntries[numEntries].entryNo = atoi(token);

        token = strtok(NULL, ",");
        strcpy(logEntries[numEntries].sensorNo, token);

        token = strtok(NULL, ",");
        logEntries[numEntries].temperature = atof(token);

        token = strtok(NULL, ",");
        logEntries[numEntries].humidity = atoi(token);

        token = strtok(NULL, ",");
        logEntries[numEntries].light = atoi(token);

        token = strtok(NULL, ",");
        strcpy(logEntries[numEntries].time, token);

        numEntries++;
    }

    fclose(file);
}

void displayData() {
    printf("EntryNo\tSensorNo\tTemperature\tHumidity\tLight\tTime\n");
    for (int i = 0; i < numEntries; i++) {
        printf("%d\t%s\t\t%.1f\t\t%d\t\t%d\t%s\n",
               logEntries[i].entryNo,
               logEntries[i].sensorNo,
               logEntries[i].temperature,
               logEntries[i].humidity,
               logEntries[i].light,
               logEntries[i].time);
    }
}

int main() {
    const char* filename = "data.csv";
    extractData(filename);
    displayData();
    return 0;
}