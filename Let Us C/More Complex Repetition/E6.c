#include<stdio.h>
int main()
{
    int p=100000;
    for(int i=1;i<=10;i++)
    {
        p+=0.10*p;
        printf("%d year population is %d\n",i,p);
    }
    printf("Total population after a decade will be %d\n",p);
    return 0;
}