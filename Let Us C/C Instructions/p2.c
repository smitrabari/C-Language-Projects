// program to reverse a number
#include<stdio.h>
#include<conio.h>
int main()
{
    int d1,d2,d3,d4,d5,n;
    long int revnum;
    printf("Enter a Number(only for 5 digits) : "); // Can also use for loopto reverse any number of digits
    scanf("%d",&n);
    d5=n % 10;  // taking modulas to get last digit
    n= n / 10;  // removing the last digit by dividing by 10
    d4=n%10;
    n=n/10;
    d3=n%10;
    n=n/10;
    d2=n%10;
    n=n/10;
    d1=n%10;
    revnum=d5*10000+d4*1000+d3*100+d2*10+d1;  // calculating the reverse number
    printf("The Reverse number will be : %d",revnum);
    getch();
    return 0;
}