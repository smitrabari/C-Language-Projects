//Sum of 5 digit number
// take refrence from p2.c
#include<stdio.h>
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
    // same as p2.c but her we are calulating the sum not reverse number.
    // hence we have to add all digits to get the sum.
    sum=d5+d4+d3+d2+d1;
    printf("Sum of Digits is : %ld",sum);
    return 0;
}