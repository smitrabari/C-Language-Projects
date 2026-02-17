// Program to find the sum of first 25 natural numbers using recursion
#include <stdio.h>
int sum(int n) // Function to calculate the sum of first n natural numbers
{
    if(n == 1) // Base case: if n is 1, return 1
        return 1;

    return n + sum(n - 1); // Recursive case: n plus the sum of first (n-1) natural numbers
}

int main()
{
    int result = sum(25);// Calling the function with n = 25
    printf("Sum of first 25 natural numbers = %d", result); // Printing the result
    return 0;
}
