// Odd even checker
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a No. : ");
    scanf("%d",&n);
    // if divisible by 2 then even else odd
    if(n%2==0)
    {
        printf("The no. is EVEN!!");
    }
    else
    {
        printf("The no. is ODD!!");
    }
    return 0;
}