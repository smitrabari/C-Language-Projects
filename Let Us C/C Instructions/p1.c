// Calculator to find the area of triangle!!
#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
    float a,b,c,sp,area;
    printf("Enter First Side of Triangle : ");
    scanf("%f",&a);
    printf("Enter Second Side of Triangle : ");
    scanf("%f",&b);
    printf("Enter Third Side of Triangle : ");
    scanf("%f",&c);
    //Finding Semi-perimeter of triangle.
    sp = (a + b + c) / 2;
    //Actual Formula to calculate area
    area = sqrt(sp*(sp-a)*(sp-b)*(sp-c));
    printf("The Area of triangle is : %.2f",area);
    getch();
    return 0;
}