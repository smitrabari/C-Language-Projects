#include<stdio.h>
#include<math.h>
int main()
{
    int n=1729;
    int x,y;
    for(x=1;x<=n;x++)
    {
        for(y=1;y<=n;y++)
        {
            if(pow(x,3)+pow(y,3)==n)
            {
            printf("(%d,%d)",x,y);
            }
        }
    }
    return 0;
}