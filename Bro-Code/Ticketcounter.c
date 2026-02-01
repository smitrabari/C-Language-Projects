#include<stdio.h>
#include<stdbool.h>
int main()
{
    float price = 10;
    bool isstudent = true;
    bool issenior = false;
    /*
    studnet - $9
    senior - $8
    stduent + Senior - $7
    */
    if (isstudent)
    {
        if (issenior)
        {
            printf("you get student discount 10%");
            printf("you get senior discount 20%");
            price *= 0.7;
        }
        else
        {
            printf("you get student discount 10%");
            price *= 0.9;
        }
        
    }
    else
    {
        if (issenior)
        {
            printf("you get senior discount 20%");
            price *= 0.8;
        }
    }
    

    printf("price of ticket will be $%.2f - ");
    return 0;
}