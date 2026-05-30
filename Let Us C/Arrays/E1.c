// taking 25 numbers from user and counting total positive, negative, even and odd numbers
#include <stdio.h>
int main() 
{
    int num[25]; // array to store 25 numbers
    int pos=0,neg=0,even=0,odd=0;
    for(int i = 0;i<=24;i++) // loop to take input from user
    {
        printf("Enter %d number - ",i+1);
        scanf("%d",&num[i]);
    }
    for(int i = 0;i<=24;i++) // loop to count positive and negative numbers
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
    for(int i = 0;i<=24;i++) // loop to count even and odd numbers
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