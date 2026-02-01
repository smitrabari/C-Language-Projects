#include<stdio.h>
int main()
{
    // TEMPRATURE CONVERTION PROGRAM...

    char choice = '\0';
    float Celsius = 0.0f;
    float Fahrenheit = 0.0f;

    printf("---TEMPRATURE CONVERTING PROGRAM---\n");
    printf("C. Celsius to Fahrenheit.\n");
    printf("F. Fahrenheit to Celsius.\n");
    printf("Enter Your choice in C or F - ");
    scanf("%c",&choice);

    if (choice == 'C')
    {
        //Celsius to Fahrenheit.
        printf("Enter temprature in Celsius - ");
        scanf("%f",&Celsius);
        Fahrenheit = (Celsius * 9 / 5) + 32;
        printf("%.2f C = %.2f F\n", Celsius, Fahrenheit);
    }
    else if (choice == 'F')
    {
        //Fahrenheit to Celsius.
        printf("Enter temprature in Fahrenheit - ");
        scanf("%f",&Fahrenheit);
        Celsius = (Fahrenheit - 32) * 5 / 9;
        printf("%.2f F = %.2f C\n", Fahrenheit, Celsius);
    }
    else if (choice == 'K')
    {
        // if user want to convert into kelvin
        printf("Sorry, this calculator is for only for C and F.\n");
    }
    else
    {
        printf("Invalid choice... please enter C or F.\n");
    }
    
    return 0;
    
}