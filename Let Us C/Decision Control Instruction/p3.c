// leap year checker.
#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year : ");
    scanf("%d",&year); // this can easy when use logical operator{&& and ||}.
    /* if a year is divisible by 4 then it is a leap year 
    but if it is divisible by 100 
    then it should be divisible by 400 to be a leap year.*/
    if(year%100==0)
    {
        if(year%400==0)
        {
            printf("Leap Year!!");
        }
        else
        {
            printf("Not a Leap Year!!");
        }
    }
    else
    {
        if(year%4==0)
        {
            printf("Leap Year!!");
        }
        else
        {
            printf("Not a Leap Year!!");
        }
    }
    return 0;
}