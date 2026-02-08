// Write a program to find the absolute value of a number using the abs() function.
#include <stdio.h>
#include <stdlib.h> 

int main() {
    int num,absolute_num;
    printf("Enter actual number is: ");
    scanf("%d",&num);
    absolute_num = abs(num); 
    printf("The absolute value is: %d\n", absolute_num);
    return 0;
}
