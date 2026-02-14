// Program to calculate trigonometric functions for a given angle
#include<stdio.h>
#include<math.h>
#define PI 3.14159265358979323846 // Constant value of PI
int main()
{
    double ang,rad;
    printf("Enter Angle : ");
    scanf("%lf",&ang);
    // converting angle from degrees to radians as trigonometric functions in C use radians.
    rad = ang * PI / 180.0;
    // calculating and printing the trigonometric functions.
    printf("sin(%.2f) \t= \t%.2f\n",ang,sin(rad));
    printf("cos(%.2f) \t= \t%.2f\n",ang,cos(rad));
    printf("tan(%.2f) \t= \t%.2f\n",ang,tan(rad));
    printf("cosec(%.2f) \t= \t%.2f\n",ang,1/sin(rad));
    printf("sec(%.2f) \t= \t%.2f\n",ang,1/cos(rad));
    printf("cot(%.2f) \t= \t%.2f\n",ang,1/tan(rad));
    return 0;
}