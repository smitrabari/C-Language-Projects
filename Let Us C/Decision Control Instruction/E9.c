// A program to find the day of the week for a given date.
#include <stdio.h>

int main()
{
    int year;
    int total_years, leap_years, normal_years;
    int total_days, day;

    printf("Enter year: ");
    scanf("%d", &year);

    total_years = year - 1901;

    leap_years = (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400
               - (1900 / 4 - 1900 / 100 + 1900 / 400);

    normal_years = total_years - leap_years;

    total_days = normal_years * 365 + leap_years * 366;

    day = total_days % 7;

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
