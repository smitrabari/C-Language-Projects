#include <stdio.h>
#include <math.h>

// Function to calculate distance between two points
double distance(double x1, double y1, double x2, double y2)
{
    return sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
}

// Function to calculate area of triangle using Heron's formula
double areaTriangle(double x1, double y1,
                    double x2, double y2,
                    double x3, double y3)
{
    double a = distance(x1, y1, x2, y2);
    double b = distance(x2, y2, x3, y3);
    double c = distance(x3, y3, x1, y1);

    double s = (a + b + c) / 2;

    return sqrt(s * (s - a) * (s - b) * (s - c));
}

// Function to check whether point (x, y) lies inside triangle ABC
int isInside(double x1, double y1,
             double x2, double y2,
             double x3, double y3,
             double x, double y)
{
    double A  = areaTriangle(x1, y1, x2, y2, x3, y3);

    double A1 = areaTriangle(x, y, x2, y2, x3, y3);
    double A2 = areaTriangle(x1, y1, x, y, x3, y3);
    double A3 = areaTriangle(x1, y1, x2, y2, x, y);

    if (fabs(A - (A1 + A2 + A3)) < 0.0001)
        return 1;
    else
        return 0;
}

int main()
{
    double x1, y1, x2, y2, x3, y3;
    double x, y;

    printf("Enter coordinates of A (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Enter coordinates of B (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    printf("Enter coordinates of C (x3 y3): ");
    scanf("%lf %lf", &x3, &y3);

    printf("Enter coordinates of point P (x y): ");
    scanf("%lf %lf", &x, &y);

    if (isInside(x1, y1, x2, y2, x3, y3, x, y))
        printf("Point lies inside the triangle.\n");
    else
        printf("Point lies outside the triangle.\n");

    return 0;
}
