#include<stdio.h>
int main()
{
    int choice = 0;
    float kilograms = 0.0f;
    float pounds = 0.0f;
    printf("---WEIGHT CONVERTER CALCULATOR---\n");
    printf("1. kilograms to pounds\n");
    printf("2. pounds to kilograms\n");
    scanf("%d",&choice);

    if (choice == 1)
    {
        // kilograms to pounds
        printf("Enter kilograms - ");
        scanf("%f",&kilograms);
        pounds = kilograms * 2.20462;
        printf("%.2fKG = %.2flbs\n",kilograms,pounds);
    }
    else if (choice == 2)
    {
        //pounds to kilograms
        printf("Enter pound - ");
        scanf("%f",&pounds);
        kilograms = pounds / 2.20462;
        printf("%.2flbs = %.2fKG\n",pounds,kilograms);
    }
    else
    {
        printf("Invalid statement...");
    }
    
    return 0;
}