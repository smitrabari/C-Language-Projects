#include<stdio.h>
#include<math.h>
#define PI 3.14159265358979323846
int main()
{
    //CIRCLE CALCULATION PROGRAM
    double radius = 0.0;
    double area = 0.0;
    double suarfacearea = 0.0;
    double volume = 0.0;
    char unit ='m';

    printf("Enter radius of circle (in meter) : ");
    scanf("%lf",&radius);

    area = PI * pow(radius,2);

    suarfacearea = 4 * PI * pow(radius,2);

    volume = (4.0/3.0) * PI * pow(radius,3);

    printf("Area of circle is %.2lf%c\n",area,unit);
    printf("Surfacearea of circle is %.2lf%c\n",suarfacearea,unit);
    printf("volume of circle is %.2lf%c\n",volume,unit);

    return 0;
}