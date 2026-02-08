// Program to check whether a character is capital, small, numeric or special symbol.
/*ASCII value of capital characters is from 65 to 90 
and small characters is from 97 to 122 
and numeric characters is from 48 to 57.*/
#include<stdio.h>
int main()
{
    char x;
    printf("Enter a character - ");
    scanf("%c",&x);
    if(x>=65 && x<=90)
    {
        printf("Its Capital Character!!");
    }
    else if(x>=97 && x<=122)
    {
        printf("Its Lower Character!!");
    }
    else if(x>=48 && x<=57)
    {
        printf("Its Numeric Character!!");
    }
    else
    {
        printf("Its Special Symbols Character!!");
    }
    return 0;
}