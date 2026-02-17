// Fibonacci series using recursion. 
#include<stdio.h>
int fibo(int); // function prototype
int main()
{
    int t=25,i,n = 0;
    for(i=1;i<=t;i++) // loop to print first 25 Fibonacci numbers.
    {
        printf("%d\t",fibo(n)); // function call to print Fibonacci number at position n.
        n++;
    }
    return 0;
}
int fibo(int n) // function definition to calculate Fibonacci number at position n.
{
    if(n==0 || n==1) // base condition for Fibonacci series.
    // if n is 0 or 1 then return n as Fibonacci number at position n is n itself.
    {
        return n;// return n as Fibonacci number at position n is n itself.
    }
    else
    {
        return (fibo(n - 1) + fibo(n - 2)); // recursive call to calculate Fibonacci number at position n by adding Fibonacci numbers at positions n-1 and n-2.
    }
}