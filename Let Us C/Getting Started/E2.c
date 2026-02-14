//area and perimeter calculator
#include<stdio.h>
int main()
{
    float L,B,R,area_rectangle,area_circle,perimeter,circumference;
    printf("---Welcome---\n");
    printf("Enter length rectangle: ");
    scanf("%f",&L); // input length of rectangle from user
    printf("Enter breadth of rectangle: ");
    scanf("%f",&B); // input breadth of rectangle from user
    area_rectangle = L * B; // formula to calculate area of rectangle is Area = Length * Breadth
    perimeter = 2 * (L + B); // formula to calculate perimeter of rectangle is Perimeter = 2 * (Length + Breadth)
    printf("Area of Rectangle: %.2f\n",area_rectangle);
    printf("Perimeter of Rectangle: %.2f\n",perimeter);
    printf("Enter radius of circle: "); // input radius of circle from user
    scanf("%f",&R);
    area_circle = 3.14 * R * R;
    circumference = 2 * 3.14 * R;
    printf("Area of Circle: %.2f\n",area_circle); // formula to calculate area of circle is Area = π * r^2 where r is the radius of the circle
    printf("Circumference of Circle: %.2f\n",circumference); // formula to calculate circumference of circle is Circumference = 2 * π * r where r is the radius of the circle
    return 0;
}