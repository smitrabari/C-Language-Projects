#include<stdio.h>
#include<math.h>
int main()
{
    // COMPOUND INTREST CALCULATOR
    
    double principal = 0.0;
    double rate = 0.0;
    int year = 0;
    int compound = 0;
    double total = 0.0;

    printf("---Compound Intrest Calculator---");

    printf("\nEnter Principal - ");
    scanf("%lf",&principal);

    printf("Enter Rate - ");
    scanf("%lf",&rate);
    rate = rate / 100;

    printf("Enter Year - ");
    scanf("%d",&year);

    printf("Enter Time - ");
    scanf("%d",&compound);

    total = principal * pow( 1 + rate / year,year * compound);

    printf("Your Return will be %lf",total);
    return 0;
}