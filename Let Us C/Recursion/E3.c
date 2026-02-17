#include <stdio.h>

void hanoi(int n, char A, char B, char C)
{
    if(n == 1)
    {
        printf("Move disk 1 from %c to %c\n", A, C); // Base case: Move the single disk from A to C
        return;
    }

    hanoi(n - 1, A, C, B);   // Step 1
    printf("Move disk %d from %c to %c\n", n, A, C); // Step 2
    hanoi(n - 1, B, A, C);   // Step 3
}

int main()
{
    int disks = 4; // You can change the number of disks here
    hanoi(disks, 'A', 'B', 'C'); // A is the source, B is the auxiliary, and C is the destination
    return 0;
}