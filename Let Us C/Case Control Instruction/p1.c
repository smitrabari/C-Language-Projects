#include<stdio.h>
#include<stdlib.h>

int main()
{
    int choice, i, num, fact;

    while(1)
    {
        printf("1.Factorial of a Number.\n");
        printf("2.Prime or not.\n");
        printf("3.Odd or Even.\n");
        printf("4.Exit.\n");
        printf("Your Choice - ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter a No. - ");
                scanf("%d", &num);
                fact = 1;
                for(i = 1; i <= num; i++)
                {
                    fact = fact * i;
                }
                printf("Factorial is %d\n", fact);
                break;

            case 2:
                printf("Enter a No. - ");
                scanf("%d", &num);

                if (num <= 1)
                {
                    printf("Not Prime\n");
                    break;
                }

                for (i = 2; i * i <= num; i++)
                {
                    if (num % i == 0)
                    {
                        printf("Not Prime\n");
                        break;
                    }
                }

                if (i * i > num)
                    printf("Prime\n");

                break;

            case 3:
                printf("Enter a No. - ");
                scanf("%d", &num);
                if(num % 2 == 0)
                    printf("Its Even!!\n");
                else
                    printf("Its Odd!!\n");
                break;

            case 4:
                exit(0);

            default:
                printf("Invalid Choice!!\n");
        }
    }
    return 0;
}
