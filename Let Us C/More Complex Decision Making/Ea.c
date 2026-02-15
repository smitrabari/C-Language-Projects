/*input a character and check whether 
it is an uppercase letter, lowercase letter, digit or special character.*/ 
// included QA and B.
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a Character - ");
    scanf("%c", &ch); // ASCII value of character is stored in ch.

    // can find ASCII value of a character by typecasting it to int.
    if (ch >= 65 && ch <= 90)
        printf("Uppercase Letter");
    else if (ch >= 97 && ch <= 122)
        printf("Lowercase Letter");
    else if (ch >= 48 && ch <= 57)
        printf("Digit");
    else
        printf("Special Character");

    return 0;

}