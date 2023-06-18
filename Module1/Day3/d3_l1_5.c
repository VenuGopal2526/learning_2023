/*
 Write a program to find both smallest and largest digits in given n numbers
For example let's say we have n = 3, and n1 = 8, n2 = 156, n3 = 123450, the result will be "Not Valid", 1 and 6, 0 and 5
*/

// C program to find the largest and smallest
// digit of a number
#include <stdio.h>
#define Max(x,y) (x>y?x:y)
#define Min(x,y) (x>y?y:x)

void findLargestSmallest(int num)
{
    int largestDigit = 0;
    int smallestDigit = 9;
    int digit;
    while(num)
    {
        digit = num%10;
        // Finding the largest digit
        largestDigit = Max(digit, largestDigit);

        // Find the smallest digit
        smallestDigit = Min(digit, smallestDigit);
        num = num/10;
    }
    printf("Largest Digit: %d \n", largestDigit);
    printf("Smallest Digit: %d \n", smallestDigit);
}


int main()
{
    int n;
    printf("Enter no.of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=0&&arr[i]<10){
            printf("num= %d\n",arr[i]);
            printf("Not valid\n");
        }
        else{
            printf("num= %d\n",arr[i]);
            findLargestSmallest(arr[i]);
        }
    }
}