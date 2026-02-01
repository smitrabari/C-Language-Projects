#include<stdio.h>
#include<string.h>
int main()
{
    // Name of the student 
    char name[50]="";

    printf("Name of Student - ");
    fgets(name , sizeof(name), stdin);
    name[strlen(name) - 1]='\0';

    if (strlen(name) == 0)
    {
        printf("please type your name...");
    }
    else
    {
        printf("hello %s",name);
    }
    return 0;
}