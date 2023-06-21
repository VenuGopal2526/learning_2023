/*
. Write a program using structures to calculate the difference between two time periods using a user-defined function.
*/

#include <stdio.h>

typedef struct {
    int hours;
    int minutes;
    int seconds;
} Time;

Time getTime();
Time calculateDifference(Time start, Time end);
void displayTimeDifference(Time diff);

int main() {
    Time startTime, endTime, difference;

    printf("Enter the start time:\n");
    startTime = getTime();

    printf("Enter the end time:\n");
    endTime = getTime();

    difference = calculateDifference(startTime, endTime);

    printf("\nTime difference: ");
    displayTimeDifference(difference);

    return 0;
}

Time getTime() {
    Time t;

    printf("Hours: ");
    scanf("%d", &t.hours);

    printf("Minutes: ");
    scanf("%d", &t.minutes);

    printf("Seconds: ");
    scanf("%d", &t.seconds);

    return t;
}

Time calculateDifference(Time start, Time end) {
    Time diff;

    int startSeconds = start.hours * 3600 + start.minutes * 60 + start.seconds;
    int endSeconds = end.hours * 3600 + end.minutes * 60 + end.seconds;
    int secondsDiff = endSeconds - startSeconds;

    diff.hours = secondsDiff / 3600;
    secondsDiff %= 3600;

    diff.minutes = secondsDiff / 60;
    diff.seconds = secondsDiff % 60;

    return diff;
}

void displayTimeDifference(Time diff) {
    printf("%d hours, %d minutes, %d seconds\n", diff.hours, diff.minutes, diff.seconds);
}
