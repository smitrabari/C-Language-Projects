// Sum of digits of a number using recursion.
#include<stdio.h>
int rsum (int);
int main()
{
    int num, sum;
    printf("Enter a Number - "); // input a number
    scanf("%d",&num);
    sum = rsum(num); // function call
    printf("Sum = %d",sum);
    return 0;
}
int rsum (int n)
{
    int r,s;
    if(n!=0) // base condition
    {
        r = n % 10; // last digit
        s = r + rsum(n/10); // recursive call with remaining digits
    }           //^ function call as recursion.
    else
    {
        return 0;
    }
    return s;
}