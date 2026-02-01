#include<stdio.h>
#include<ctype.h>
int main()
{
    char question[][100] = {"What is my name?",
                            "Whats my age?",
                            "Where do i study?",
                            "Whats my Last name?"};

    char option[][100] = {"A. Sam\nB. Rabari\nC. Smit\nD. Sumit",
                        "A. 20\nB. 19\nC. 18\nD. 21",
                        "A. KPGU\nB. SVMIT\nC. PPSU\nD. PU",
                        "A. Rabari\nB. Ahir\nC. Bharvad\nD. Sharma"};
    
    char answer[] = {'C','B','C','A'};

    char guess = '\0';
    int score = 0;
    int questionCount = sizeof(question)/sizeof(question[0]);

    printf("---QUIZ GAME---");

    for (int i = 0; i < questionCount; i++)
    {
        printf("\n%s\n", question[i]);
        printf("\n%s\n", option[i]);
        scanf(" %c", &guess);

        guess = toupper(guess);

        if (guess == answer[i])
        {
            printf("\nYOU ARE RIGHT!!\n");
            score++;
        }
        else
        {
            printf("\nYOU ARE WRONG!!\n");
        }
        
    }

    printf("\nYour Score is %d/%d\n", score, questionCount);

    return 0;
                        
}