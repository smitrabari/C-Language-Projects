#include<stdio.h>
#include<string.h>
int main()
{
    char names[3][25] = {0};
    
    for (int i = 0; i < sizeof(names)/sizeof(names[0]); i++)
    {
        printf("Enter Name - ");
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strlen(names[i]) - 1] = '\0';
    }
    for (int i = 0; i < sizeof(names)/sizeof(names[0]); i++)
    {
        printf("Your Names are %s\n",names[i]);
    }
    
    
    return 0;
}