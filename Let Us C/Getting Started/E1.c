// Temperature calculator from Fahrenheit to Celsius
#include<stdio.h>
#include<conio.h>
// used conio.h header file for getch() function to hold the output screen until user presses a key
int main()
{
    float F,C;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f",&F);
    // formula to convert Fahrenheit to Celsius is C = (F - 32) * 5/9
    C = (F - 32) * 5/9;
    printf("Temperature in Celsius: %.2f C",C);
    getch(); // to hold the output screen until user presses a key
    return 0;
}