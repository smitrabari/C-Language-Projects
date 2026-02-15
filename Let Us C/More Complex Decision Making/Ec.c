// Program to check if a number is greater than 3 numbers using ternary operator
#include<stdio.h>
int main()
{
    int a,b,c,largest;
    printf("Enter a 1st number - ");
    scanf("%d", &a);
    printf("Enter a 2nd number - ");
    scanf("%d", &b);
    printf("Enter a 3rd number - ");
    scanf("%d", &c);
    // condition ? expression1 : expression2; -> ternary operator
    largest = (a > b && a > c) ? a : (b > c) ? b : c;
    printf("The largest number is %d", largest);
    return 0;
}