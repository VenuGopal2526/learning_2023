/* Write a function to find biggest of 2 numbers using 
    - if else
    - ternary operator
*/    

//using if-else

#include<stdio.h>

int find_biggest_if_else(int num1, int num2){
    if (num1 > num2){
        return num1;
    }
    else{
        return num2;
    }
}



// using ternary operator

#include<stdio.h>

int find_biggest_ternary(int num1, int num2)
{
    return (num1 > num2) ? num1 : num2;
}





