#include<stdio.h>
int main()
{
    float km,m,ft,in,cm;
    printf("Enter distance in Kilometer: ");
    scanf("%f",&km);
    m = km * 1000;
    ft = km * 3280.84;
    in = km * 39370.1;
    cm = km * 100000;
    printf("Distance in Meter: %.2f m\n",m);
    printf("Distance in Feet: %.2f ft\n",ft);
    printf("Distance in Inches: %.2f in\n",in);
    printf("Distance in Centimeter: %.2f cm\n",cm);
    return 0;
}