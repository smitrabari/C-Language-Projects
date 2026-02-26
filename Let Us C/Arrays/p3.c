// Counting the number of times a number is present in an array
#include <stdio.h>
int main() 
{
    int num[]={7,5,9,3,9,1,8,9}; // Array of 8 elements
    int n,c,i;
    printf("Enter Number to be seached : ");
    scanf("%d",&n);
    c = 0;
    for(i=0;i<=7;i++) // Loop to count the number of times n is present in the array num
    {
        if(num[i]==n) // If the element at index i is equal to n, then increment the count c
        {
            c++;
        }
    }
    printf("There are %d times %d in Array!!\n",c,n); // Printing the count of n in the array num
    return 0;
}