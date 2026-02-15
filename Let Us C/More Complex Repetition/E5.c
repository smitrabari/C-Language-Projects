// Write a program to find all Pythagorean triplets between 1 and 30.
#include<stdio.h>
int main()
{
    int x,y,z; // taking loop variables as x,y,z
    for(x=1;x<=30;x++)
    {
        for(y=x;y<=30;y++) // to avoid repetition of same triplet in different order, we start y from x
        {
            for(z=y;z<=30;z++) // to avoid repetition of same triplet in different order, we start z from y
            {
                if((x*x)+(y*y)==(z*z))
                {
                    printf("(%d,%d,%d)\t\n",x,y,z);
                }
            }
        }
    }
    return 0;
}