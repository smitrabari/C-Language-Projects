#include<stdio.h>

int main()
{
    int d, r;

    printf("Enter a number: ");
    scanf("%d", &d);

    while(d != 0)
    {
        r = d % 8;
        d = d / 8;
        printf("Quotient = %d , Remainder = %d\n", d, r);
    }

    return 0;
}
