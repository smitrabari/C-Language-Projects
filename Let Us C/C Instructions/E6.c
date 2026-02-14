// Program to swap two numbers without using a temporary variable
#include<stdio.h>
int main()
{
    int a,b,x;
    printf("Enter A no. - ");
    scanf("%d",&a);
    printf("Enter B no. - ");
    scanf("%d",&b);
    x = a + b; // take the sum of a and b in x
    a = x - a; // subtract a from x to get the value of b and assign it to a
    b = x - b; // subtract b from x to get the value of a and assign it to b
    printf("A = %d and B = %d",a,b);
    return 0;
}