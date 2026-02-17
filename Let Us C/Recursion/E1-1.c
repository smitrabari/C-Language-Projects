#include<stdio.h>
void eq(int); //function prototype
int main()
{
    int num,bin;
    printf("Enter the number - ");
    scanf("%d",&num); //taking input from user
    eq(num); //function call
    return 0;
}
void eq(int n) //function definition
{
    int temp[32]; //array to store binary digits
    int i=0; //counter for array index
    if(n==0) //if number is zero, print 0 and return
    {
        printf("0"); //print 0 for zero input
       return; 
    }
    else
    {
        while(n>0) //loop to convert decimal to binary
        {
            temp[i]= n%2; //store the remainder (binary digit) in array
            n = n/2; //update n by dividing it by 2
            i++; //increment index for next binary digit
        }
        
        for(int j = i-1;j>=0;j--) //loop to print binary digits in reverse order
        {
            printf("%d",temp[j]); //print the binary digit stored in array
        }
    }
}