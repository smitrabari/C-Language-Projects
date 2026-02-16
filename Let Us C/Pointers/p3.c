// Program to demonstrate the use of pointer to pointer
#include<stdio.h>
int main()
{
    float a = 3.14,*b,**c;
    b = &a;
    c = &b;
    printf("%p\t%p\t%p\n",&a,&b,&c); // address of a, b and c
    printf("%p\t%p\t\n",b,c); // value of b and c (address of a and b)
    printf("%f\t%f\t%f\t\n",a,*b,**c); // value of a, value at address b and value at address c (value of a)
    return 0;
}