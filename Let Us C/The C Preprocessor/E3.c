// Calculate simple and compound interest using macros defined in "interest.h"
#include <stdio.h>
#include <math.h>
#include "interest.h"
int main()
{
    float p, r, t;

    printf("Enter Principal, Rate and Time: ");
    scanf("%f %f %f", &p, &r, &t);

    printf("Simple Interest = %.2f\n", SIMPLE_INTEREST(p, r, t));
    printf("Amount (SI) = %.2f\n", AMOUNT_SI(p, r, t));

    printf("Compound Interest = %.2f\n", COMPOUND_INTEREST(p, r, t));
    printf("Amount (CI) = %.2f\n", COMPOUND_AMOUNT(p, r, t));

    return 0;
}