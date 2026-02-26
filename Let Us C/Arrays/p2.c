// Reversing of an array
#include <stdio.h>
int main() 
{
    int arr[5],arr2[5],i,j;
    printf("Enter 5 elements : ");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&arr[i]); // Taking input of 5 elements in the array arr
    }
    for(i=0,j=4;i<=4;i++,j--)
    {
        arr2[j]=arr[i]; // Storing the elements of arr in reverse order in arr2
    } //^impportant part of the code
    printf("Reversed Form :\n"); // Printing the elements of arr2 which are in reverse order
    for(i=0;i<=4;i++)
    {
        printf("%d\t",arr2[i]);
    }
    return 0;
}