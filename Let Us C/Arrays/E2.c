// checking whether the given 5 numbers are palindrome or not
#include <stdio.h>
int main()
{
    int n[5]; // array to store 5 numbers
    int isPalindrome = 1; // flag to check if the numbers are palindrome or not

    for(int i = 0; i < 5; i++) // loop to take input from user
    {
        printf("Enter %d number - ", i + 1);
        scanf("%d", &n[i]);
    }

    for(int i = 0; i < 5/2; i++) // loop to check if the numbers are palindrome or not
    {
        if(n[i] != n[5 - i - 1]) // comparing the first and last number, second and second last number and so on
        {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome) // if the flag is 1, then the numbers are palindrome
        printf("Palindrome!!\n");
    else
        printf("Not Palindrome!!\n");

    return 0;
}