/*
Write a C program that uses functions to perform the following operations: 
     i) Reading a complex number 
     ii) Writing a complex number 
     iii) Addition of two complex numbers 
     iv) Multiplication of two complex numbers 
  (Note: represent complex number using a structure.
*/

#include <stdio.h>

typedef struct {
    float real;
    float imaginary;
} Complex;

Complex readComplex();
void writeComplex(Complex num);
Complex addComplex(Complex num1, Complex num2);
Complex multiplyComplex(Complex num1, Complex num2);

int main() {
    Complex num1, num2, sum, product;

    printf("Enter the first complex number:\n");
    num1 = readComplex();

    printf("Enter the second complex number:\n");
    num2 = readComplex();

    // Addition of two complex numbers
    sum = addComplex(num1, num2);

    // Multiplication of two complex numbers
    product = multiplyComplex(num1, num2);

    printf("\nFirst complex number: ");
    writeComplex(num1);

    printf("Second complex number: ");
    writeComplex(num2);

    printf("Sum of the two complex numbers: ");
    writeComplex(sum);

    printf("Product of the two complex numbers: ");
    writeComplex(product);

    return 0;
}

Complex readComplex() {
    Complex num;

    printf("Real part: ");
    scanf("%f", &num.real);

    printf("Imaginary part: ");
    scanf("%f", &num.imaginary);

    return num;
}

void writeComplex(Complex num) {
    printf("%.2f + %.2fi\n", num.real, num.imaginary);
}

Complex addComplex(Complex num1, Complex num2) {
    Complex result;

    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;

    return result;
}

Complex multiplyComplex(Complex num1, Complex num2) {
    Complex result;

    result.real = (num1.real * num2.real) - (num1.imaginary * num2.imaginary);
    result.imaginary = (num1.real * num2.imaginary) + (num1.imaginary * num2.real);

    return result;
}
