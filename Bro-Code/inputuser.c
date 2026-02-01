#include<stdio.h>
#include<string.h>
int main()
{
    int a;
    char b [30]="";
    printf("type a - \n");
    scanf("%d",&a);
    getchar();
    printf("type b - \n");
    fgets(b, sizeof(b), stdin);
    b[strlen(b)-1]=0;
    printf("b = %s\n", b);
    printf("a = %d\n", a);
    
    return 0;
}