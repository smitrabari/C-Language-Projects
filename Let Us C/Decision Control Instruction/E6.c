// A program to check whether the three points are in straight line or not.
#include <stdio.h>
int main() {
    int x1,x2,x3,y1,y2,y3,temp;
    printf("Enter X1 - ");
    scanf("%d",&x1);
    printf("Enter X2 - ");
    scanf("%d",&x2);
    printf("Enter X3 - ");
    scanf("%d",&x3);
    printf("Enter Y1 - ");
    scanf("%d",&y1);
    printf("Enter Y2 - ");
    scanf("%d",&y2);
    printf("Enter Y3 - ");
    scanf("%d",&y3);
    temp=x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
    if(temp==0)
    {
        printf("its Straight Line");
    }
    else
    {
        printf("its not a Straight Line");
    }
    return 0;
}
