// A program to check whether the area of a rectangle is greater than its perimeter or not.
#include <stdio.h>
int main() {
    int l,b,area,peri;
    printf("Enter Length : ");
    scanf("%d",&l);
    printf("Enter breath : ");
    scanf("%d",&b);
    area=l*b;
    peri=2*(l+b);
    if(area>peri)
    {
        printf("Area of rectangle is greater than its perimeter.");
    }
    else
    {
        printf("Area of rectangle is NOT greater than its perimeter.");
    }
    return 0;
}
