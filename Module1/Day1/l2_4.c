/*
 Write a function to accept an integer (32 bits) and operation type to do the following and return the result to main function.
    - Set 2 bits from nth bit position, if operation type is 1
    - Clear 3 bits from nth bit position, if operation type is 2
    - Toggle MSB, if operation type is 3
   You can consider the below function prototype,
    - bit_operations(int num, int oper_type, int pos);
*/

//function to accept an integer (32 bits) and operation type to do the following and return the result to main function.

#include <stdio.h>

int bitOperations(int num, int oper_type, int pos) {
    int result = num; // Initialize the result with the given number
    
    switch (oper_type) {
        case 1:
            result |= (0x3 << pos); // Set 2 bits from nth bit position
            break;
        case 2:
            result &= ~(0x7 << pos); // Clear 3 bits from nth bit position
            break;
        case 3:
            result ^= (1 << 31); // Toggle MSB (Most Significant Bit)
            break;
        default:
            printf("Invalid operation type.\n");
            break;
    }
    
    return result;
}

