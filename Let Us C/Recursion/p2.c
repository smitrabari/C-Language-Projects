// Prime factors of a number using recursion.
#include<stdio.h>
int prime (int,int); // function prototype
int main()
{
    int num;
    printf("Enter a Number - ");
    scanf("%d",&num);
    printf("Prime Factor are - ");
    prime(num,2); // function call
    return 0;
}
int prime (int n,int i) // n is the number and i is the smallest prime factor(2).
{
    if(i<=n) //n is greater than or equal to 2
    {
        if(n%i==0) // if n is divisible by 2 then 2 is a prime factor of n.
        {
            printf("%d ",i);
            n=n/i; 
        }
        else
        {
            i++; 
        }
        prime (n,i); // recursive call with updated n and i.
    }
}