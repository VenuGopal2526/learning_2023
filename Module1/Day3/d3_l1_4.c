/*
Find the largest number by deleting single digit in a 4 digit number 5872 - 872, 9856 - 986

Concepts to be used.
- Loops
- Operators
*/

// Program to find the largest number by deletung single digit in a 4 digit number.

#include<stdio.h>

int main()
{
    int num, largest = 0;
    printf("Enter a 4-digit number:");
    scanf("%d", &num);

    //Extracting individual values
    int digit1 = num / 1000;
    int digit2 = (num % 1000) / 100;
    int digit3 = (num % 100) / 10;
    int digit4 = (num % 10);

    // Deleting single digit finding largest 3 digit number
    int temp = digit1 * 100 + digit2 * 10 + digit3;
    if(temp > largest)
        largest = temp;

    temp = digit1 * 100 + digit2 * 10 + digit4;
    if(temp > largest)
        largest = temp;

    temp = digit1 * 100 + digit3 * 10 + digit4;
    if(temp > largest)
        largest = temp;

    temp = digit2 * 100 + digit3 * 10 + digit4;
    if(temp > largest)
        largest = temp;

    printf("The largest number after deleting single digit is: %d\n", largest);
    return 0; 

}