// Calculate Ramesh gross Salary
#include<stdio.h>
int main()
{
    float rbs,da,hra,gs;
    printf("Enter the Basic Salary of Ramesh:\t ");
    scanf("%f",&rbs);
    da = rbs * 0.4;
    hra = rbs * 0.2;
    // Gross Salary = Ramesh Basic Salary + Dearness Allowance + House Rent Allowance
    gs = rbs + da + hra;
    printf("Dearness Allowance (DA) :\t %.2f\t\n",da);
    printf("House Rent Allowance (HRA) :\t %.2f\t\n",hra);
    printf("Gross Salary (GS) :\t        %.2f\t\n",gs);
    return 0;
}