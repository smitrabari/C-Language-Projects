#include<stdio.h>

int square(int num)
{
    return num*num;
}

int cube(int num)
{
    return num*num*num;
}
int main()
{
    int x = square(2);
    int y = cube(3);
    int z = square(z);

    printf("%d\n",x);
    printf("%d\n",y);
    printf("%d\n",z);

    return 0;
}