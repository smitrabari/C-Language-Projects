// Program to check whether a triangle is valid or not.
#include<stdio.h>
int main()
{
    int s1,s2,s3,sum,largerside;
    printf("Enter Side 1 - ");
    scanf("%d",&s1);
    printf("Enter Side 2 - ");
    scanf("%d",&s2);
    printf("Enter Side 3 - ");
    scanf("%d",&s3);
    if(s1>s2 && s1>s3)
    {
        sum = s2 + s3;
        largerside = s1;
    }
    else if(s2>s3)
    {
        sum = s1 + s3;
        largerside = s2;
    }
    else
    {
        sum = s1 + s2;
        largerside = s3;
    }
    if(sum>largerside)
    {
        printf("The Triangle is Valid!!");
    }
    else
    {
        printf("Invalid!!");
    }
    return 0;
}