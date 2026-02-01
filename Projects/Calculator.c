#include<stdio.h>
int main()
{
    char operators = '\0';
    double num1 = 0.0f;
    double num2 = 0.0f;
    double result = 0.0f;

    printf("---CALCULATOR---\n");

    printf("Enter Number 1 - \n");
    scanf("%lf", &num1);

    printf("Enter Operators {+ - * /} - \n");
    scanf(" %c", &operators); //use space in %c format specifier for buffer line.

    printf("Enter Number 2 - \n");
    scanf("%lf", &num2);

    switch (operators)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 == 0)
        {
            printf("You can't divide zero!\n");
        }
        else
        {
            result = num1 / num2;
        }
        break;
    default:
    printf("Invalid Operator!!\n");
    }

    if (num2 == 0)
    {
        printf("Result can't be declare...\n");
    }
    else
    {
        printf("Result is %.2lf\n");
    }
    return 0;
}