// Write a program to calculate the sum, average and standard deviation of n numbers using pointers.
#include<stdio.h>
#include<math.h>
void cal(int *,int *,float *);
int main()
{
    int sum,avg;
    float stdev;
    cal(&sum,&avg,&stdev);
    printf("Sum = %d\n",sum);
    printf("Average = %d\n",avg);
    printf("Standard Deviation = %.2f\n",stdev);
    return 0;
}
void cal(int *sum,int *avg,float *stdev)
{
    int n1,n2,n3,n4,n5;
    printf("Enter 1 number: ");
    scanf("%d",&n1);
    printf("Enter 2 number: ");
    scanf("%d",&n2);
    printf("Enter 3 number: ");
    scanf("%d",&n3);
    printf("Enter 4 number: ");
    scanf("%d",&n4);
    printf("Enter 5 number: ");
    scanf("%d",&n5);
    *sum = n1+n2+n3+n4+n5;
    *avg = *sum/5;
    *stdev = sqrt((pow(n1-*avg,2)+pow(n2-*avg,2)+pow(n3-*avg,2)+pow(n4-*avg,2)+pow(n5-*avg,2))/5);
}