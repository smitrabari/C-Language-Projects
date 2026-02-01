#include<stdio.h>
int main()
{
    // AGE DEFINER
    
    int age;

    printf("Enter your Age : ");
    scanf("%d",&age);

    if (age < 0)
    {
        printf("You are not born");
    }
    else if (age == 0)
    {
        printf("You are just born");
    }
    else if (age <= 11 && age >= 1)
    {
        printf("You are child");
    }
    else if (age <= 19 && age >= 11)
    {
        printf("You are teenager");
    }
    else if(age >= 65)
    {
        printf("You are senior");
    }
    else
    {
        printf("You are adult");
    }
    return 0;
}