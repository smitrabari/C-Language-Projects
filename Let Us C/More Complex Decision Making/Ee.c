// Program to determine the designation of an employee based on his salary
#include<stdio.h>
int main()
{
    float sal;
    printf("Enter your Salary - ");
    scanf("%f", &sal);
    sal>= 25000 && sal<=40000 ? printf("Manager\n")  // nested ternary operator
        : sal >= 15000 && sal < 25000 ? printf("Accountant\n") : printf("Clerk\n");
    return 0;
}