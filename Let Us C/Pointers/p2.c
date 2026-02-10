// sum and factorial
#include<stdio.h>
void power(float,int,int,float *,int *);
int main()
{
    int b,number,factorial;
    float a;
    printf("Enter a number and then raised to the power no: ");
    scanf("%d %f",&number,&a);
    printf("enter a number to find factorial: ");
    scanf("%d",&number);
    printf("The result is %.2f and factorial is %d\n",a,number);
    printf("factorial is %d\n",factorial);
    return 0;
}
void power(float a,int b,int number,float *result,int *factorial)
{
    float res = 1;
    for(int i=0;i<b;i++)
    {
        res = res*a;
    }
    *result = res;
    *factorial = 1;
    for(int i=1;i<=number;i++)
    {
        *factorial = *factorial*i;
    }
}