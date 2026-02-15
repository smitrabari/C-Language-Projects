// Write a program to calculate the sum of the following series:
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    float x,sum=0.0;
    printf("Enter x - ");
    scanf("%f",&x);
    sum = (x-1)/x;
    
    for(int i=2;i<=7;i++)
    {
        sum = sum + 0.5 * pow((x-1)/x,i);
        printf("Sum from %d term is %.2f\n",i,sum);
    }
    printf("Sum = %f\n",sum);
    return 0;
}