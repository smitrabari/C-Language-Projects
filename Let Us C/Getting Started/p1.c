#include<stdio.h>
int main()
{
    float rbs,da,hra,gs;
    printf("Enter the Basic Salary of Ramesh: ");
    scanf("%f",&rbs);
    da = rbs * 0.4;
    hra = rbs * 0.2;
    gs = rbs + da + hra;
    printf("Dearness Allowance (DA) : %.2f\n",da);
    printf("House Rent Allowance (HRA) : %.2f\n",hra);
    printf("Gross Salary (GS) : %.2f\n",gs);
    return 0;
}