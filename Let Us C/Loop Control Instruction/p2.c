// Factorial calculation using a while loop in C.
#include <stdio.h>

int main() 
{
    int n,i,fact;
    printf("Enter a Number - ");
    scanf("%d",&n);
    fact=i=1;    
    while(i<=n)
    {
        fact = fact * i;
        i++; 
    }
    printf("The factorial is %d",fact);
    return 0;
}