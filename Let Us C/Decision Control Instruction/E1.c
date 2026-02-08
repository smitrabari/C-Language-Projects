/* Write a program to reverse a 5 digit number 
and check whether the reversed number is same as original number or not.*/
#include<stdio.h>
int main()
{
    int d5,d4,d3,d2,d1,n,temp;
    long int renum;
    printf("Enter a number - ");
    scanf("%d",&n);
    temp=n;
    d5=n % 10;
    n= n / 10;
    d4=n%10;
    n=n/10;
    d3=n%10;
    n=n/10;
    d2=n%10;
    n=n/10;
    d1=n%10;
    renum=d5*10000+d4*1000+d3*100+d2*10+d1;
    if(temp==renum)
    {
        printf("Reversed no. is same as actual no.!!");
    }
    else
    {
        printf("Reversed No. - %ld",renum);
    }
    return 0;
}