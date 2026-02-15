// Program to check if the value of sin(a) + 1/cos(a) is equal to 1 or not
#include<stdio.h>
#include<math.h>
#define PI 3.14159265
int main()
{
    double a,deg, rad;
    printf("Enter a angle (in degrees) - ");
    scanf("%lf", &a);
    rad = a * (PI/180.0); // converting degrees to radians
    deg = sin(rad) + 1.0/cos(rad); // converting radians to degrees
    if (deg == 1.000000)
    {
        printf("The value of sin(a) + 1/cos(a) is equal to 1");
    }
    else
    {
        printf("The value of sin(a) + 1/cos(a) is not equal to 1");
    }
    return 0;
}