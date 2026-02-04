#include<stdio.h>
int main()
{
    int s1,s2,s3;
    printf("Enter Side 1 - ");
    scanf("%d",&s1);
    printf("Enter Side 2 - ");
    scanf("%d",&s2);
    printf("Enter Side 3 - ");
    scanf("%d",&s3);
    if(s1==s2 || s1==s3 || s2==s3)
    {
        printf("Its Isosceles Triangle.");
    }
    else if(s1==s2==s3)
    {
        printf("Its Equilaterial Triangle.");
    }
    else if((s1*s1)+(s2*s2)==(s3*s3))
    {
        printf("Its Right-angle Triangle.");
    }
    else if(s1!=s2!=s3)
    {
        printf("Its Scalene Triangle.");
    }
    return 0;
}