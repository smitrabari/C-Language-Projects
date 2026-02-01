#include<stdio.h>
int main()
{
    float L,B,R,area_rectangle,area_circle,perimeter,circumference;
    printf("---Welcome---\n");
    printf("Enter length and breadth of rectangle: ");
    scanf("%f%f",&L,&B);
    area_rectangle = L * B;
    perimeter = 2 * (L + B);
    printf("Area of Rectangle: %.2f\n",area_rectangle);
    printf("Perimeter of Rectangle: %.2f\n",perimeter);
    printf("Enter radius of circle: ");
    scanf("%f",&R);
    area_circle = 3.14 * R * R;
    circumference = 2 * 3.14 * R;
    printf("Area of Circle: %.2f\n",area_circle);
    printf("Circumference of Circle: %.2f\n",circumference);
    return 0;
}