// Power of a number using function.
#include<stdio.h>
#include<math.h>
int sq(int a,int b);
int main()
{
    int a,b,power;
    printf("enter number - ");
    scanf("%d",&a);
    printf("enter power number - ");
    scanf("%d",&b);
    power = sq(a,b);
    printf("Power is %d",power);
    return 0;
}
int sq(int a,int b)
{
    int power;
    power = pow(a,b);
    return (power);
}