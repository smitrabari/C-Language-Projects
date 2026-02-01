#include<stdio.h>
//Cash Calculator
int main()
{
    int nohun,nofif,noten,notwo,noone;
    int amount,notes;
    printf("enter the ammount : ");
    scanf("%d",&amount);
    nohun = amount / 100 ;
    amount = amount % 100;
    nofif = amount / 50 ;
    amount = amount % 50;
    noten = amount / 10 ;
    amount = amount % 10;
    notwo = amount / 2 ;
    amount = amount % 2;
    noone = amount / 1 ;
    amount = amount % 1;
    notes = nohun + nofif + noten + notwo + noone;
    printf("Total no. of notes will be : %d",notes);
    return 0;
}