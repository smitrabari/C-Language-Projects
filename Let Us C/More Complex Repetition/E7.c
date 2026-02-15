/* Sir Ramanujan number (1729) is the smallest number that can be expressed 
as the sum of two cubes in two different ways.
Write a program to find the pairs of numbers whose cubes add up to 1729.*/
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