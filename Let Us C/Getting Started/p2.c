// Converter of distance
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
    printf("Distance in Meter:\t %.2f\t m\n",m);
    printf("Distance in Feet:\t %.2f\t ft\n",ft);
    printf("Distance in Inches:\t %.2f\t in\n",in);
    printf("Distance in Centimeter:\t %.2f\t cm\n",cm);
    return 0;
}