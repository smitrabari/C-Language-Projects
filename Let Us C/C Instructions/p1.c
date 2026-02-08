// Calulator for finding area of Triangle
#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,sp,area;
    printf("Enter First Side of Triangle : ");
    scanf("%f",&a);
    printf("Enter Second Side of Triangle : ");
    scanf("%f",&b);
    printf("Enter Third Side of Triangle : ");
    scanf("%f",&c);
    //Semi-perimeter 
    sp = (a + b + c) / 2;
    //actual Formula to calculate area
    area = sqrt(sp*(sp-a)*(sp-b)*(sp-c));
    printf("The Area of triangle is : %.2f",area);
    return 0;
}