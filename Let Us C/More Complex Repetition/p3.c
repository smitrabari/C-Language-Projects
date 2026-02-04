#include<stdio.h>
int main()
{
    int n,i,x;
    printf("Combination!!\n");
    for(n=1;n<=3;n++)
    {
        for(i=1;i<=3;i++)
        {
            for(x=1;x<=3;x++)
            {
                printf("(%d,%d,%d)\n",n,i,x);
            }
        }
    }
    return 0;
}