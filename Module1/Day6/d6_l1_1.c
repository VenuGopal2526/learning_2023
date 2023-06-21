/*
Use structures to find the volume and the total surface area of the box. 
   You need to access the members of the structure with the help of a structure pointer:
    a. With the help of (*) asterisk or indirection operator and (.) dot operator.
    b. With the help of ( -> ) Arrow operator using pointer as well as dot representation.
*/

#include<stdio.h>

struct Box
{
    float length;
    float width;
    float height;
};

int main()
{
    struct Box myBox;
    struct Box *ptrBox;

    ptrBox = &myBox;           //Assigning the address if mybox to the pointer ptrBox

    //Accessing structure members using pointer with dot operator.
    ptrBox->length = 10.0;
    ptrBox->width = 5.0;
    ptrBox->height = 3.0;

    //claculating volume
    float volume = ptrBox->length * ptrBox->width * ptrBox->height;
    printf("Volume: %.2f\n", volume);

    //calculating surface area
    float surfaceArea = 2 * (ptrBox->length * ptrBox->width + 
                             ptrBox->length * ptrBox->height + 
                             ptrBox->width * ptrBox->height);
    printf("Total Surface Area: %.2f\n", surfaceArea);

    return 0;




}