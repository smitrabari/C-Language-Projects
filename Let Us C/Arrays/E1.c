#include <stdio.h>
int main() 
{
    int num[25];
    int pos=0,neg=0,even=0,odd=0;
    for(int i = 0;i<=24;i++)
    {
        printf("Enter %d number - ",i+1);
        scanf("%d",&num[i]);
    }
    for(int i = 0;i<=24;i++)
    {
        if(num[i]<0)
        {
            neg++;
        }
        if(num[i]>0)
        {
            pos++;
        }
    }
    for(int i = 0;i<=24;i++)
    {
        if(num[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("There are total %d postive numbers\n",pos);
    printf("There are total %d negative numbers\n",neg);
    printf("There are total %d even numbers\n",even);
    printf("There are total %d odd numbers\n",odd);
    return 0;
}