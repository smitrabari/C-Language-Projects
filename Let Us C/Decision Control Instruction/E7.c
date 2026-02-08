// A program to check whether a point lies inside, on or outside a circle.
#include <stdio.h>
int main()
{
    int x1, y1, x2, y2, r;
    int d2, r2;

    printf("Enter center of circle (x1 y1): ");
    scanf("%d %d", &x1, &y1);

    printf("Enter radius of circle: ");
    scanf("%d", &r);

    printf("Enter point (x2 y2): ");
    scanf("%d %d", &x2, &y2);

    d2 = (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1);
    r2 = r * r;

    if (d2 < r2)
        printf("Point lies INSIDE the circle.");
    else if (d2 == r2)
        printf("Point lies ON the circle.");
    else
        printf("Point lies OUTSIDE the circle.");

    return 0;
}
