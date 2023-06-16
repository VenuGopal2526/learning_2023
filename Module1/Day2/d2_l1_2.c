/*
Write a program to swap any type of data passed to an function.

Topics to be covered
- Pointers
- Type Casting
*/

//program to swap any type of data passed to an function.

#include <stdio.h>

void swap(void *a, void *b, size_t size) {
    unsigned char *temp = (unsigned char *)malloc(size);
    
    memcpy(temp, a, size); // Copy the content of 'a' to a temporary memory location
    
    memcpy(a, b, size); // Copy the content of 'b' to 'a'

    
    memcpy(b, temp, size); // Copy the content of the temporary memory location to 'b'
    
    free(temp);
}

int main() {
    int num1 = 10;
    int num2 = 20;
    
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    
    
    swap(&num1, &num2, sizeof(int)); // Swap integers
    
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
    
    double pi = 3.14141;
    float e = 1.71217;
    
    printf("Before swapping: pi = %lf, e = %f\n", pi, e);
    
    swap(&pi, &e, sizeof(double)); // Swap floating-point numbers
    
    printf("After swapping: pi = %lf, e = %f\n", pi, e);
    
    return 0;
}
