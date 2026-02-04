#include<stdio.h>
int main()
{
    int year;
    printf("Enter A year - ");
    scanf("%d",&year);
    if(year%400==0 && year%100!=0 || year%4==0)
    {
        printf("Its a Leap Year!!");
    }
    else
    {
        printf("Its not a Leap Year!!");
    }
    return 0;
}