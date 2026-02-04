#include<stdio.h>
int main()
{
    float otpay;
    int hours,i=1;
    while(i<=10)
    {
        printf("Enter hours worked by employee %d - ",i);
        scanf("%d",&hours);
        if(hours>40)
        {
            otpay=(hours-40)*120.00;
            printf("Overtime Pay of employee %d is %.2f\n",i,otpay);
        }
        else
        {
            printf("No Overtime Pay for employee %d\n",i);
        }
        i++;
    }
    return 0;
}