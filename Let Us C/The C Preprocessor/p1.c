// Program to demonstrate the use of C Preprocessor directives
#include <stdio.h>
#define capital(x) (x>=65 && x<=90? 1 : 0) //terary operator
#define small(x) (x>=97 && x<=122? 1 : 0)
#define isAB(x) (capital(x) || small(x)? 1 : 0)
#define big(x,y) (x>y? x : y) //macro function to find the bigger number
int main()
{
    int a,b,d;
    char c;
    printf("Enter a Character - ");
    scanf("%c",&c);
    if (small(c)==1)
    {
        printf("it's a Small case character!!\n");
    }
    if (capital(c)==1)
    {
        printf("it's a Upper case character!!\n");
    }
    if (isAB(c) != 1)
    {
        printf("You not entered wrong character!!\n");
    }
    printf("Enter a Number - ");
    scanf("%d",&a);
    printf("Enter a Number - ");
    scanf("%d",&b);
    d = big(a,b); //calling the macro function to find the bigger number
    printf("%d is greater !!\n",d); //printing the bigger number
    return 0;
}