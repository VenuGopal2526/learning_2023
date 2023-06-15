/* 
Write a program to read the 
    - Roll No
    - Name (Note, you should read full name of the student including initials)
    - Marks of Physics, Math and Chemistry
    Calculate the total, percentage and print the summary. 
*/

#include <stdio.h>

int main() {
    int rollNo;
    char name[50];
    int physics, math, chemistry;
    int total;
    float percentage;

    // Read inputs from the user
    printf("Enter Roll No: ");
    scanf("%d", &rollNo);

    printf("Enter Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Physics Marks: ");
    scanf("%d", &physics);

    printf("Enter Math Marks: ");
    scanf("%d", &math);

    printf("Enter Chemistry Marks: ");
    scanf("%d", &chemistry);

    //Calculate total marks and percentage
    total = physics + math + chemistry;
    percentage = (float)total / 300 * 100;

    //Print the summary
    printf("\n----- Student Summary -----\n");
    printf("Roll No: %d\n", rollNo);
    printf("Name: %s\n", name);
    printf("Physics: %d\n", physics);
    printf("Math: %d\n", math);
    printf("Chemistry: %d\n", chemistry);
    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}