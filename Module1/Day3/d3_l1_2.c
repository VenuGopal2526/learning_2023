/*
Prints Bits:
Scan a 32bit integer and prints its bits.

Concepts to be used.
- Loops
- Bitwise Operators
*/

#include <stdio.h>

void printBits(unsigned int n) {
    int i;
    // Starting from the most significant bit (leftmost)
    for (i = 31; i >= 0; i--) {
        // Extract the i-th bit using bitwise AND with a bitmask
        int bit = (n >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
} 

int main() {
    unsigned int number;
    printf("Enter a 32-bit integer: ");
    scanf("%u", &number);
    printf("Binary representation:\n");
    printBits(number);
    return 0;
}
