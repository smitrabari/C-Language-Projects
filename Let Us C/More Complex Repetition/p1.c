// All Prime Number from 1 to 300
// Good Question for Loop in Loop
#include<stdio.h>
int main()
{
    int n,i;
    printf("All Prime Number from 1 to 300 : \n1\t");
    for(n=1;n<=300;n++)
    {
        i=2;
        for(i=2;n>i;i++)
        {
            if(n%i==0)
            {
                break;
            }
        }
        if(i==n)
            {
                printf("%d\t",n);
            }
    }
    return 0;
}