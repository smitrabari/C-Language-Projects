// Swapping of elements in an array
#include <stdio.h>
int main() 
{
    int t,n,i; 
    int num[]={12,13,46,5,2,511,57,23}; // Array of 8 elements
    for(i = 0; i<=7;i=i+2) // Loop to swap the elements of the array
    {
        t=num[i]; // Storing the value of num[i] in a temporary variable t
        num[i]=num[i+1]; // Assigning the value of num[i+1] to num[i]
        num[i+1]=t; // Assigning the value of t to num[i+1]
    }
    for(i = 0; i<=7;i++)
    {
        printf("%d\t",num[i]); // Printing the elements of the array after swapping
    }
    return 0;
}