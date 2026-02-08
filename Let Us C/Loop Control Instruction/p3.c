// Power calculation using a while loop in C.
#include<stdio.h>
int main()
{
    float x,pow;
    int y,i;
    printf("Enter a base Number - ");
    scanf("%f",&x);
    printf("Enter a Power - ");
    scanf("%d",&y);
    pow=i=1;
    while(y>=i)
    {
        pow = pow * x;
        i++;  
    }
    printf("The Answer is %.2f to the power %d is %.2f",x,y,pow);
    return 0;
}