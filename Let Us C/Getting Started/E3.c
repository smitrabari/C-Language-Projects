//paper size calculator
#include<stdio.h>
int main()
{
    int l=1189,w=841;
    printf("---Paper Sizze Calculator---\n");
    printf("A0 %d x %d mm\n",l,w);
    printf("A1 %d x %d mm\n",l/2,w);
    printf("A2 %d x %d mm\n",l/4,w/2);
    printf("A3 %d x %d mm\n",l/8,w/4);
    printf("A4 %d x %d mm\n",l/16,w/8);
    printf("A5 %d x %d mm\n",l/32,w/16);
    printf("A6 %d x %d mm\n",l/64,w/32);
    printf("A7 %d x %d mm\n",l/128,w/64);
    printf("A8 %d x %d mm\n",l/256,w/128);

    return 0;
}