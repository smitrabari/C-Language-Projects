// A program to find the day of the week for a given date.
#include <stdio.h>

int main()
{
    int year;
    int total_years, leap_years, normal_years;
    int total_days, day;

    printf("Enter year: ");
    scanf("%d", &year); // input year.

    total_years = year - 1901; // finding total years from 1901 to the given year.

    leap_years = (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400
               - (1900 / 4 - 1900 / 100 + 1900 / 400); // finding Leap years from 1901 to the given year.

    normal_years = total_years - leap_years; // finding normal years from 1901 to the given year.

    total_days = normal_years * 365 + leap_years * 366; // finding total days from 1901 to the given year.

    day = (total_days % 7) + 1; // finding the day of the week by taking modulus of total days with 7.
    
    if (day == 0)
        printf("Monday");
    else if (day == 1)
        printf("Tuesday");
    else if (day == 2)
        printf("Wednesday");
    else if (day == 3)
        printf("Thursday");
    else if (day == 4)
        printf("Friday");
    else if (day == 5)
        printf("Saturday");
    else
        printf("Sunday");

    return 0;
}
