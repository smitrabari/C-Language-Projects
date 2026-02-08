// BMI calculation and categorization based on weight and height.
#include<stdio.h>
#include<math.h>
int main()
{
    float w,h,bmi;
    printf("Enter Weight - ");
    scanf("%f",&w);
    printf("Enter Height - ");
    scanf("%f",&h);
    bmi=w/pow(h,2);
    printf("BMI = %.2f\n",bmi);
    
    if(bmi<15)
    {
        printf("Starvation");
    }
    else if(bmi >=15.1 && bmi <= 17.5)
    {
        printf("Anorexic");
    }
    else if(bmi >=17.6 && bmi <= 18.5)
    {
        printf("Underweight");
    }
    else if(bmi >=18.6 && bmi <= 24.9)
    {
        printf("ideal");
    }
    else if(bmi >=25 && bmi <= 25.9)
    {
        printf("Overweight");
    }
    else if(bmi >=30 && bmi <= 30.9)
    {
        printf("Obese");
    }
    else if(bmi >=40)
    {
        printf("Morbidly Obese");
    }
    return 0;
}