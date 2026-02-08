// Print ASCII characters from 0 to 255 using a while loop in C.
#include<stdio.h>
int main()
{
    int i=1;
    while(i>=0 && i<=255)
    {
        printf("%c\n",i);
        i++;
    }
    return 0;
}