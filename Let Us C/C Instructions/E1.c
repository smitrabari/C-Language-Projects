#include<stdio.h>
//Sum of 5 digit number
int main()
{
    int d1,d2,d3,d4,d5,n;
    long int sum;
    printf("Enter a Number : ");
    scanf("%d",&n);
    d5=n % 10;
    n= n / 10;
    d4=n % 10;
    n=n / 10;
    d3=n % 10;
    n=n / 10;
    d2=n % 10;
    n=n / 10;
    d1=n % 10;
    sum=d5+d4+d3+d2+d1;
    printf("Sum of Digits is : %ld",sum);
    return 0;
}