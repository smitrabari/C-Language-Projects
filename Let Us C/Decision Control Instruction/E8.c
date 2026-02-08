// A program to check whether a point lies on the X-axis, Y-axis or at the origin.
#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter x and y coordinates: ");
    scanf("%d %d", &x, &y);

    if (x == 0 && y == 0)
        printf("The point lies at the ORIGIN.");
    else if (y == 0)
        printf("The point lies on the X-axis.");
    else if (x == 0)
        printf("The point lies on the Y-axis.");
    else
        printf("The point lies neither on X-axis nor Y-axis.");

    return 0;
}
