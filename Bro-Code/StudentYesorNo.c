#include<stdio.h>
#include<stdbool.h>
int main()
{
    //is a student or not

    bool isstudent;

    printf("if you are student then type 1 else 0 - ");
    scanf("%d",&isstudent);

    if (isstudent == true)
    {
        printf("You are student.");
    }
    else
    {
        printf("You are not student");
    }
    return 0;
    
}