// program to convert cartesian co-ordinates to polar co-ordinates
#include<stdio.h>
#include<math.h> // for using sqrt and atan2 functions
int main()
{
    int x,y,r;
    float q;
    printf("Enter co-ordinates\nX - ");
    scanf("%d",&x);
    printf("Y - ");
    scanf("%d",&y);
    r = sqrt(pow(x,2)+pow(y,2));
    q = atan2(y,x); // atan2 is used to calculate the angle in radians
    printf("The Polar co-ordinates are : (%d,%f)",r,q);
    return 0;
}