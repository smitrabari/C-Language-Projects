// Write a program to print the following pattern:
//         1
//       2   3
//     4   5   6
//   7   8   9   10
#include <stdio.h>
int main()
{
    int num = 1;
    for (int row = 1; row <= 4; row++)
    {
        for (int sp = 1; sp <= 4 - row; sp++) // to print spaces
        {
            printf("  ");
        }
        for (int col = 1; col <= row; col++) // to print numbers
        {
            printf("%d   ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}
