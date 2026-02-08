// Program to check whether a year is a leap year or not.
/*the years 1700, 1800, and 1900 were not a Leap year.*/
#include<stdio.h>
int main()
{
    int year;
    printf("Enter year - ");
    scanf("%d",&year);
    if(year % 400 == 0 && year % 100 != 0 || year % 4 ==0 ) // condition for leap year
    {
        printf("Its a Leap Year!!");
    }
    else
    {
        printf("Its not a Leap Year!!");
    }
    return 0;
}