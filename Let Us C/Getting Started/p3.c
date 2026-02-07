// Marks Calculator
#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,agg;
    float per;
    printf("---Marks Calculator---\n");
    printf("Enter marks of 1 subjects: ");
    scanf("%d",&m1);
    printf("Enter marks of 2 subjects: ");
    scanf("%d",&m2);
    printf("Enter marks of 3 subjects: ");
    scanf("%d",&m3);
    printf("Enter marks of 4 subjects: ");
    scanf("%d",&m4);
    printf("Enter marks of 5 subjects: ");
    scanf("%d",&m5);
    agg = m1 + m2 + m3 + m4 + m5;
    per = agg / 5.0;
    printf("Aggregate marks: \t%d\n",agg);
    printf("Percentage: \t%.2f%%\n",per);
    return 0;
}