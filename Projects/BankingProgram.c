#include<stdio.h>

void checkbalance(float balance);
float deposit();
float withdraw(float balance);

int main()
{
    int choice = 0;
    float balance = 10.0f;

    printf("--- WELCOME TO BANK ---\n");
    do
    {
        printf("\nChoose one of the following - \n");
        printf("\n1. Check Balance.\n");
        printf("2. Deposit.\n");
        printf("3. Withdraw.\n");
        printf("4. Exit.\n");
        printf("Enter Your Choice - ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            checkbalance(balance);
            break;
        case 2:
            balance += deposit();
            break;
        case 3:
            balance -= withdraw(balance);
            break;
        case 4:
            printf("\n THANK YOU FOR USING OUR BANK!! \n");
            break;
        
        default:
            printf("Invalid Choice!! Please Enter 1 - 4.\n");
            break;
        }
    } while (choice != 4);
    
    return 0;
}
void checkbalance(float balance)
{
    printf("\nYOUR CURRENT BALANCE IS - $%.2f\n",balance);
}
float deposit()
{
    float amount = 0.0f;
    printf("\nEnter Amount to be deposit - ");
    scanf("%f",&amount);
    if (amount < 0)
    {
        printf("Invalid Amount!!\n");
        return 0.0f;
    }
    else
    {
        printf("successfully $%.2f deposited to bank.\n",amount);
        return amount;
    }
    
}
float withdraw(float balance)
{
    float amount = 0.0f;
    printf("\nEnter Amount to be Withdraw - ");
    scanf("%f",&amount);
    if (amount < 0)
    {
        printf("Invalid Amount!!\n");
        return 0.0f;
    }
    else if (amount > balance)
    {
        printf("insufficient Amount!!\n");
        return 0.0f;
    }
    else
    {
        printf("successfully $%.2f withdraw from bank.\n",amount);
        return amount;
    }
}