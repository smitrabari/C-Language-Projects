// Check whether a given year is leap year or not using function.
#include<stdio.h>
int leap(int yr); // Function prototype.
int main()
{
    int yr;
    printf("Enter Year : ");
    scanf("%d",&yr);
    leap(yr); // Function call.
    return 0;
}
int leap(int yr) // Function definition.
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
