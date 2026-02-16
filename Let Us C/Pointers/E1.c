#include<stdio.h>
void shift(int *a,int *b,int *c);
int main()
{
    int x,y,z;
    printf("Enter X - ");
    scanf("%d",&x);
    printf("Enter Y - ");
    scanf("%d",&y);
    printf("Enter Z - ");
    scanf("%d",&z);
    shift(&x,&y,&z);
    printf("X=%d Y=%d Z=%d\n",x,y,z);
    return 0;
}
void shift(int *a,int *b,int *c)
{
    int temp;
    temp = *c;
    *c = *b;
    *b = *a;
    *a = temp;
}