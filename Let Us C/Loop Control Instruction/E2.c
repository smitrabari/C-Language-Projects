#include<stdio.h>
int main()
{
    int i=100,d1,d2,d3,temp;
    while(i>=100 && i<=500)
    {
        temp=i;
        d1=temp%10;
        temp=temp/10;
        d2=temp%10;
        temp=temp/10;
        d3=temp%10;
        if((d1*d1*d1)+(d2*d2*d2)+(d3*d3*d3) == i)
        {
            printf("%d\n",i);
        }
        i++;
    }
    return 0;
}