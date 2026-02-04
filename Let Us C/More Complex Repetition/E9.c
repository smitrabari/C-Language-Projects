#include <stdio.h>
int main()
{
    int num = 1;
    for (int row = 1; row <= 4; row++)
    {
        for (int sp = 1; sp <= 4 - row; sp++)
        {
            printf("  ");
        }
        for (int col = 1; col <= row; col++)
        {
            printf("%d   ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}
