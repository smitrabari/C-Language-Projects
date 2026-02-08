// Program to calculate wind-chill factor
#include<stdio.h>
#include<math.h>
int main()
{
    float t,v,wcf;
    printf("Enter Temperature - ");
    scanf("%f",&t);
    printf("Enter Wind Velocity - ");
    scanf("%f",&v);
    // formula to calculate wind-chill factor.
    wcf = 35.74 + 0.6215*t + ((0.4275*t) - 35.75)*pow(v,0.16);
    printf("The Wind-chill factor(wcf) will be : %.2f",wcf);
    return 0;
}