#include<stdio.h>
#include<string.h>
int main()
{
    char name[50] = "\0";
    int format = 0;

    printf("---WELCOME TO CRICKET_SCORE_CARD---\n");
    printf("Enter your Name - ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '/0';

    printf("\n---Enter Format---");
    printf("\n1. TEST\n2. ODI\n3. t20i");
    scanf("%d",&format);

    switch (expression)
    {
    case constant expression:
        /* code */
        break;
    
    default:
        break;
    }
    return 0;
}