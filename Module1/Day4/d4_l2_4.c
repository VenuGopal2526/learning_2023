//Bubble sort

#include <stdio.h>

//code for sorting
void bubbleSort(int arr[], int size) 
{
    for (int i = 0; i < size - 1; i++) 
    {
        for (int j = 0; j < size - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

//code for printing array
void printArray(int arr[], int size) 
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main() 
{
    int arr[] = {30, 40, 50, 60, 20, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array before sorting: ");
    printArray(arr, size);

    bubbleSort(arr, size);

    printf("\nArray after sorting: ");
    printArray(arr, size);

    return 0;
}
