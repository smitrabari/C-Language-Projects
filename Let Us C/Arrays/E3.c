// finding the smallest number among 25 numbers using pointer
#include <stdio.h>
int main()
{
    int n[25]; // array to store 25 numbers
    int *ptr = n; // pointer to the first element of the array
    int smallest, i; 

    printf("Enter 25 numbers:\n");

    for(i = 0; i < 25; i++) // loop to take input from user
        scanf("%d", ptr + i); // taking input using pointer

    smallest = *ptr; // initializing smallest with the first element of the array

    for(i = 1; i < 25; i++) // loop to find the smallest number
    {
        if(*(ptr + i) < smallest) // comparing the current element with the smallest number
            smallest = *(ptr + i); // updating smallest if the current element is smaller
    }
    printf("Smallest number is %d\n", smallest);
    return 0;
}