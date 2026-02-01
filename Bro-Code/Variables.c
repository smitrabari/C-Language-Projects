#include<stdio.h>
#include<stdbool.h>
int main()
{
    int a = 6;
    float b = 2.1;
    double pi = 3.14159265358979323846264;
    char grade ='A';
    char smit [] ="he is smit";
    bool heismale = true;
    printf("value of a and b is %d and %.1f\n",a,b);
    printf("value of pi will be-%.7lf\n",pi);
    printf("the grade is %c\n",grade);
    printf("%s\n",smit);
    printf("he is male %d",heismale);
    return 0;
}