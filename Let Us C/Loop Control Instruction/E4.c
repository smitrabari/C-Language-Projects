// Program to count the number of positive, negative, and zero values entered by the user.
#include<stdio.h>
int main()
{
    int n,num,pos=0,neg=0,zero=0,count=0;
    printf("Enter No. of Numbers - ");
    scanf("%d",&n);
    
    while(n>=1)
    {
        printf("Enter Number - ");
        scanf("%d",&num);
        if(num>0)
        {
            pos++;
        }
        else if(num<0)
        {
            neg++;
        }
        else
        {
            zero++;
        }
        n--;
        count++;
    }
    printf("Total No. are %d\n",count);
    printf("Total No. of Positive are %d\n",pos);
    printf("Total No. of Negative are %d\n",neg);
    printf("Total No. of Zero are %d\n",zero);
    return 0;
}