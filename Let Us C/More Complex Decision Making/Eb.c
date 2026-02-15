// Program to check if a year is a leap year or not using ternary operator
#include<stdio.h>
int main()
{
    int year;
    printf("Enter a Year - ");
    scanf("%d", &year);
    // condition ? expression1 : expression2; -> ternary operator
    (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ? printf("Leap Year") : printf("Not a Leap Year");
    return 0;
}