#include<stdio.h>
#include<windows.h>
int main()
{
    for (int i = 10; i >= 1; i--)
    {
        Sleep(1000);
        printf("%d\n",i);
    }
    Sleep(1000);
    printf("HAPPY NEW YEAR!!");
    return 0;
}