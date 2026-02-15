// Write a program to calculate compound interest for 10 different sets of values.
#include<stdio.h>
#include<math.h>
int main()
{
    int q,n;
    float r,p,a;
    printf("---Welcome to Compound Intrest Calculator---\n");
    for(int i=1;i<=10;i++) // Loop to calculate compound interest for 10 different sets of values
    {
        printf("Enter I.C. times per year - ");
        scanf("%d",&q);
        printf("Enter Annual Rate - ");
        scanf("%f",&r);
        r/=100;
        printf("Enter year - ");
        scanf("%d",&n);
        printf("Enter Principal Compound - ");
        scanf("%f",&p);
        a = p * pow( 1 + (r / q),n*q);
        printf("Amount = %.2f\n\n",a);
    }
    return 0;
}