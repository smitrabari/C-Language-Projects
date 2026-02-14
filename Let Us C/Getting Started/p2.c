// Taking distance in kilometer and converting it into meter, feet, inches and centimeter
#include<stdio.h>
int main()
{
    float km,m,ft,in,cm;
    printf("Enter distance in Kilometer: ");
    scanf("%f",&km);
    m = km * 1000; // 1 Kilometer = 1000 Meter
    ft = km * 3280.84; // 1 Kilometer = 3280.84 Feet
    in = km * 39370.1; // 1 Kilometer = 39370.1 Inches
    cm = km * 100000; // 1 Kilometer = 100000 Centimeters
    printf("Distance in Meter:\t %.2f\t m\n",m);
    printf("Distance in Feet:\t %.2f\t ft\n",ft);
    printf("Distance in Inches:\t %.2f\t in\n",in);
    printf("Distance in Centimeter:\t %.2f\t cm\n",cm);
    return 0;
}