// Weight Calculator from kg to g/ton/pound
#include<stdio.h>
double cal(double kg,double *g,double *t,double *p);
int main()
{
    double kg,g,t,p;
    printf("Enter Weight is KG - ");
    scanf("%lf",&kg);
    cal(kg,&g,&t,&p);
    printf("%lf kg = %lf g\n",kg,g);
    printf("%lf kg = %lf tons\n",kg,t);
    printf("%lf kg = %lf pounds\n",kg,p);
    return 0;
}
double cal(double kg,double *g,double *t,double *p)
{
    *g = kg * 1000;
    *t = kg / 907.2;
    *p = kg * 2.205;
}