#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int getcomputerchoice();
int getuserchoice();
void checkwinner(int getcomputerchoice,int getuserchoice);

int main()
{
    srand(time(NULL));

    printf("---ROCK PAPER SCISSORS---\n");

    int computerchoice = getcomputerchoice();
    int userchoice = getuserchoice();

    switch (userchoice)
    {
    case 1:
        printf("YOUR CHOICE IS ROCK\n");
        break;
    case 2:
        printf("YOUR CHOICE IS PAPER\n");
        break;
    case 3:
        printf("YOUR CHOICE IS SCISSORS\n");
        break;
    }

    switch (computerchoice)
    {
    case 1:
        printf("COMPUTER CHOICE IS ROCK\n");
        break;
    case 2:
        printf("COMPUTER CHOICE IS PAPER\n");
        break;
    case 3:
        printf("COMPUTER CHOICE IS SCISSORS\n");
        break;
    }
    
    checkwinner( computerchoice, userchoice);

    return 0;
}
int getcomputerchoice()
{
    return (rand() % 3) + 1;
}

int getuserchoice()
{
    int choice;
    do
    {
        printf("Enter your choice\n");
        printf("1. ROCK\n");
        printf("2. PAPER\n");
        printf("3. SCISSORS\n");
        printf("ENTER YOUR CHOICE - ");
        scanf("%d",&choice);
    } while (choice < 1 || choice > 3);
    
    return choice;
}

void checkwinner(int computerchoice,int userchoice)
{
    if (userchoice == computerchoice)
    {
        printf("THE MATCH IS TIE!!");
    }
    else if ((userchoice == 1 && computerchoice == 3) ||
            (userchoice == 2 && computerchoice == 1) ||
            (userchoice == 3 && computerchoice == 1))
    {
        printf("YOU WIN!!");
    }
    else
    {
        printf("YOU LOSE!!");
    }
}