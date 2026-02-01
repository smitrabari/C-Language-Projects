#include<stdio.h>
#include<string.h>
void happybirthday(char name[], int age)
{
    printf("Happy birthday to you!!\n");
    printf("Happy birthday to you!!\n");
    printf("Happy birthday dear %s!!\n", name);
    printf("Happy birthday to you!!\n");
    printf("You are %d Yearold!!\n", age);
}
int main()
{
    int age = 0;
    char name [50] = "";

    printf("Enter your name - ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("Enter your age - ");
    scanf("%d",&age);

    happybirthday(name,age);

    return 0;
}