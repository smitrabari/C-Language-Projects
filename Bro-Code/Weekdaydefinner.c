#include<stdio.h>
int main()
{
    // WEEK DAY DEFINNER

    int weekday = 0;

    printf("Enter Week day in (1-7) - ");
    scanf("%d",&weekday);

    switch (weekday)
    {
    case 1:
        printf("its MONDAY\n");
        break;
    case 2:
        printf("its TUESDAY\n");
        break;
    case 3:
        printf("its WEDNESDAY\n");
        break;
    case 4:
        printf("its THURSDAY\n");
        break;
    case 5:
        printf("its FRIDAY\n");
        break;
    case 6:
        printf("its SATURDAY\n");
        break;
    case 7:
        printf("its SUNDAY\n");
        break;
    
    default:
    printf("not valid input!! please enter bettween 1 to 7.");
    }
}