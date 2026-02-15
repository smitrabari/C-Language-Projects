/*Write a program to find the population of a city after a decade 
if the population increases at the rate of 10% per annum 
and the current population is 100000.*/ 
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