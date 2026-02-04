#include<stdio.h>
int main()
{
    int hn,ts;
    float cc;
    int c1,c2,c3;
    printf("Enter Hardness - ");
    scanf("%d",&hn);
    printf("Enter Carbon Content - ");
    scanf("%f",&cc);
    printf("Enter Tensile Strength - ");
    scanf("%d",&ts);

    c1=hn>50;
    c2=cc<0.7;
    c3=ts>5600;

    if(c1&&c2&&c3)
    {
        printf("Grade 10");
    }
    else if(c1&&c2)
    {
        printf("Grade 9");
    }
    else if(c2&&c3)
    {
        printf("Grade 8");
    }
    else if(c1&&c3)
    {
        printf("Grade 7");
    }
    else if(c1||c2||c3)
    {
        printf("Grade 6");
    }
    else
    {
        printf("Grade 5");
    }
    return 0;
}