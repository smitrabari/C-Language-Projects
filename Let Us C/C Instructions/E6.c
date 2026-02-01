#include<stdio.h>
int main()
{
    int a,b,x;
    printf("Enter A no. - ");
    scanf("%d",&a);
    printf("Enter B no. - ");
    scanf("%d",&b);
    x = a + b;
    a = x - a;
    b = x - b;
    printf("A = %d and B = %d",a,b);
    return 0;
}