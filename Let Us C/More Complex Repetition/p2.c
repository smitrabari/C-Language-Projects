// Sum of n/fact(n) for n=1 to 7
// good logic for loop in loop
#include<stdio.h>
int main()
{
    int n=0,i=0;
    float fact,sum=0.0;
    printf("Sum\n");
    for(n=1;n<=7;n++)
    {
        fact=1.0;
        for(i=1;i<=n;i++)
        {
            fact = fact * i;
        }
        sum = sum + n / fact;
    }
    printf("%.2f",sum);
    
    return 0;
}