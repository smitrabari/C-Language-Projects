<<<<<<< HEAD
// calculator for finding perimeter and area of circle, square and triangle using function like macros  
=======
// calculator for finding areas and perimeters!!
>>>>>>> 98b2f892d2f54780cb7e8a5506b81b319c92e2a8
#include<stdio.h>
#define PI 3.14
#define pericle(r) (2*PI*r)
#define areacircle(r) (PI*r*r)
#define perisquare(a) (4*a)
#define areasquare(a) (a*a)
#define peritriangle(a,b,c) (a+b+c)
#define areatriangle(b,h) (0.5*b*h)
int main()
{
    float r,a;
    printf("Enter the radius of circle - ");
    scanf("%f",&r);
    printf("Perimeter of Circle is - %f\n",pericle(r));
    printf("Area of Circle is - %f\n",areacircle(r));
    printf("Enter the side of square - ");
    scanf("%f",&a);
    printf("Perimeter of Square is - %f\n",perisquare(a));
    printf("Area of Square is - %f\n",areasquare(a));
    float a1,b,h;
    printf("Enter the sides of triangle - ");
    scanf("%f%f%f",&a1,&b,&h);
    printf("Perimeter of Triangle is - %f\n",peritriangle(a1,b,h));
    printf("Area of Triangle is - %f\n",areatriangle(b,h));
    return 0;
}
