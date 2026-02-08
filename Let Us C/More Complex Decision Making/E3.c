// Grade of steel based on hardness, carbon content and tensile strength
#include<stdio.h>

int main()
{
    int hn, ts;
    float cc;

    printf("Enter Hardness - ");
    scanf("%d", &hn);

    printf("Enter Carbon Content - ");
    scanf("%f", &cc);

    printf("Enter Tensile Strength - ");
    scanf("%d", &ts);

    if (hn > 50 && cc < 0.7 && ts > 5600)
        printf("Grade 10");
    else if (hn > 50 && cc < 0.7)
        printf("Grade 9");
    else if (cc < 0.7 && ts > 5600)
        printf("Grade 8");
    else if (hn > 50 && ts > 5600)
        printf("Grade 7");
    else if (hn > 50 || cc < 0.7 || ts > 5600)
        printf("Grade 6");
    else
        printf("Grade 5");

    return 0;
}
