#include <stdio.h>

int main()
{
    int n, count = 1;
    int num, min, max;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter number 1: ");
    scanf("%d", &num);
    min = max = num;

    while (count < n)
    {
        scanf("%d", &num);

        if (num < min)
            min = num;
        if (num > max)
            max = num;

        count++;
    }

    printf("Range = %d\n", max - min);

    return 0;
}