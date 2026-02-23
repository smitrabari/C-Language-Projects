// Function-like macros for mean, absolute value, lowercase conversion and maximum of three numbers
#include<stdio.h>
#define MEAN(a, b)   ( ((a) + (b)) / 2.0 )
#define ABS(x)   ( ((x) < 0) ? -(x) : (x) )
#define TO_LOWER(ch)   ( ((ch) >= 'A' && (ch) <= 'Z') ? ((ch) + 32) : (ch) )
#define MAX3(a, b, c)  ( ((a) > (b)) ? (((a) > (c)) ? (a) : (c)) \
                                      : (((b) > (c)) ? (b) : (c)) )
int main()
{
    int x = 10, y = 20;
    printf("Mean of %d and %d is %.2f\n", x, y, MEAN(x, y));
    
    int num = -5;
    printf("Absolute value of %d is %d\n", num, ABS(num));
    
    char ch = 'A';
    printf("Lowercase of '%c' is '%c'\n", ch, TO_LOWER(ch));
    
    int a = 5, b = 10, c = 3;
    printf("Maximum of %d, %d and %d is %d\n", a, b, c, MAX3(a, b, c));
    
    return 0;
}