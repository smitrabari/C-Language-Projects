#include<stdio.h>
int main()
{
    int row = 0;
    int col = 0;
    char symbol = '\0';

    printf("Enter Rows - ");
    scanf("%d",&row);

    printf("Enter Columns - ");
    scanf("%d",&col);

    printf("Enter symbol - ");
    scanf(" %c",&symbol);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%c",symbol,i*j);
        }
        printf("\n");
        
    }
    

    return 0;
}