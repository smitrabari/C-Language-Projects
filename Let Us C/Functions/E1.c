#include<stdio.h>
int leap(int yr);
int main()
{
    int yr;
    printf("Enter Year : ");
    scanf("%d",&yr);
    leap(yr);
    return 0;
}
int leap(int yr)
{
    if (yr % 4 == 0)
    {
        if (yr % 100 == 0)
        {
            if (yr % 400 == 0)
            {
                printf("%d is a leap year.",yr);
            }
            else
            {
                printf("%d is not a leap year.",yr);
            }
        }
        else
        {
            printf("%d is a leap year.",yr);
        }
    }
    else
    {
        printf("%d is not a leap year.",yr);
    }
}
