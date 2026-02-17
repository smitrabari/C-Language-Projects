// Binary equivalent of a decimal number using recursion
#include<stdio.h>
void eq(int); // function prototype
int main()
{
    int num,bin;
    printf("Enter the number - "); // input from user
    scanf("%d",&num);
    printf("Binary equivalent of %d is - ",num);
    if (num ==0) // if number is zero then print zero
    {
        printf("0");
    }
    else // if number is not zero then call the function
    {
        eq(num);// function call
    }
    return 0;
}
void eq(int n) // function definition
{
    if(n==0) // base case
    {
       return; // return to the previous function call
       // no 0 because its a void function and we are not returning any value
    }
    else
    {
        eq(n/2); // recursive call with the quotient of n divided by 2
        printf("%d",n%2); // print the remainder of n divided by 2 which is the binary digit
    }
}