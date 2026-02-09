#include<stdio.h>
int calsum(int a, int b, int c); // Function Declaration
int main()
{
    int x,y,z,sum;
    printf("Enter the value of x - ");
    scanf("%d",&x);
    printf("Enter the value of y - ");
    scanf("%d",&y);
    printf("Enter the value of z - ");
    scanf("%d",&z);
    sum = calsum(x,y,z);
    printf("The sum of %d, %d and %d is : %d",x,y,z,sum);
    return 0;
}
int calsum(int a, int b, int c) // Function Definition
{
    return a+b+c;
}