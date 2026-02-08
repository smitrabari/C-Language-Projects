// Matchstick game implementation in C where the user plays against the computer.
#include <stdio.h>

int main()
{
    int m = 21, u;

    printf("--- Matchstick Game ---\n");

    while (m > 1)
    {
        printf("\nMatchsticks left: %d", m);
        printf("\nEnter your choice (1-4): ");
        scanf("%d", &u);

        if (u < 1 || u > 4)
        {
            printf("Invalid choice!");
            continue;
        }

        m -= u;

        if (m == 1)
        {
            printf("\nYou picked the last matchstick.");
            printf("\nYou lose!");
            break;
        }

        printf("\nComputer picks: %d\n", 5 - u);
        m -= (5 - u);
    }

    return 0;
}
