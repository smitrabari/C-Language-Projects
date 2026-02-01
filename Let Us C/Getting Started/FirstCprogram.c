/*there is our first c program*/
#include<stdio.h>
int main()
{
    int p,n;
    float r,si;
    p = 1000;
    n = 3;
    r = 8.5;
    si = (p*n*r)/100;
    printf("Simple Interest is %.2f",si);
    return 0;
}