// Convert a given year to Roman numeral using function.
// Good for practice of function and loops.
#include<stdio.h>
int roman(int yr,int k, char ch);
int main()
{
    int yr;
    printf("Enter Year : ");
    scanf("%d",&yr);
    yr = roman(yr,1000,'M');
    yr = roman(yr,500,'D');
    yr = roman(yr,100,'C');
    yr = roman(yr,50,'L');
    yr = roman(yr,10,'X');
    yr = roman(yr,5,'V');
    roman(yr,1,'I');
    return 0;
}
int roman(int yr,int k, char ch)
{
    int i,j;
    j = yr / k;
    for (i = 1;i <= j; i++)
    {
        printf("%c",ch);
    }
    return (yr%k);
}