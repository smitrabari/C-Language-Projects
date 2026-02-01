#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,r;
    float q;
    printf("Enter co-ordinates\nX - ");
    scanf("%d",&x);
    printf("Y - ");
    scanf("%d",&y);
    r = sqrt(pow(x,2)+pow(y,2));
    q = atan2(y,x);
    printf("The Polar co-ordinates are : (%d,%f)",r,q);
    return 0;
}