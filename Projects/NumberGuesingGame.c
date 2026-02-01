#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int max = 1;
    int min = 100;
    int tries = 0;
    int guess = 0;
    srand(time(NULL));
    int answer = (rand() % (max - min + 1)) + 1;

    printf("---NUMBER GUESSING GAME---\n");
    do
    {
        printf("Enter a number between 1-100 - ");
        scanf("%d",&guess);
        tries++;
        if (guess<answer)
        {
            printf("Too Small!!\n");
        }
        else if (guess>answer)
        {
            printf("Too Big!!\n");
        }
        else
        {
            printf("Correct!!\n");
        }
        
        
    } while (guess!=answer);
    
    printf("The answer is %d\n", answer);
    printf("you tried %d times\n", tries);

    return 0;
}