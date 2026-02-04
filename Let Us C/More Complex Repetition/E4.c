#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    float x,sum=0.0;
    printf("Enter x - ");
    scanf("%f",&x);
    sum = (x-1)/x;
    printf("Sum = %f\n",sum);
    for(int i=2;i<=7;i++)
    {
        sum = sum + 0.5 * pow((x-1)/x,i);
        printf("%.2f\n",sum);
    }
    printf("Sum = %.2f\n",sum);
    return 0;
}