// sorting an array of 25 numbers using insertion sort
//Issue 
#include <stdio.h>
int main()
{
    int arr[25]; // array to store 25 numbers
    int i, j, key;

    printf("Enter 25 numbers:\n");

    for(i = 0; i < 25; i++) // loop to take input from user
        scanf("%d", &arr[i]);

    // Insertion Sort
    for(i = 1; i < 25; i++) 
    {
        key = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }

    printf("\nSorted array:\n");

    for(i = 0; i < 25; i++)
        printf("%d ", arr[i]);

    return 0;
}