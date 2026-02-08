// you have to input the ages of three persons and find out who is youngest among them.
#include<stdio.h>
int main()
{
    int r,s,a;
    printf("Enter age of Ram : ");
    scanf("%d",&r);
    printf("Enter age of Shyam : ");
    scanf("%d",&s);
    printf("Enter age of Ajay : ");
    scanf("%d",&a);
    if(r<s)
    {
        if(r<a)
        {
            printf("Ram is youngest!!");
        }
    }
    else if(s<r)
    {
        if(s<a)
        {
            printf("Shyam is youngest!!");
        }
    }
    else
    {
        printf("Ajay is youngest!!");
    }
    return 0;
}