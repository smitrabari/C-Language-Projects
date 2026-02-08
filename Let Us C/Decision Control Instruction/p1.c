// profit and loss calculator
#include<stdio.h>
int main()
{
    float cp,sp,p,l;
    printf("Enter Cost price : ");
    scanf("%f",&cp);
    printf("Enter Selling price : ");
    scanf("%f",&sp);
    p=sp-cp; // profit
    l=cp-sp; // loss
    if(p>0)
    {
        printf("You made a profit of %.2f",p);
    }
    if(l>0)
    {
        printf("You made loss of %.2f",l);
    }
    if(p==0)
    {
        printf("no profit!! sell at exact price!");
    }
    return 0;
}