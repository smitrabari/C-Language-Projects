// Write a program to check whether the given angles can form a triangle or not.
#include<stdio.h>
int main()
{
    int a,b,c,sum;
    printf("Enter First Angle: ");
    scanf("%d",&a);
    printf("Enter Second Angle: ");
    scanf("%d",&b);
    printf("Enter Third Angle: ");
    scanf("%d",&c);
    sum=a+b+c;
    if(sum==180)
    {
        printf("Its a triangle!!");
    }
    else
    {
        printf("Its not a triangle!!");
    }
    return 0;
}