//Cash notes Calculator program
#include<stdio.h>
#include<conio.h>
int main()
{
    int nohun,nofif,noten,notwo,noone;
    int amount,notes;
    printf("enter the ammount : ");
    scanf("%d",&amount);
    nohun = amount / 100 ;
    // by divinding by 100 we will get the number of 100 notes.
    // hence, its a int value you will get division value in integer.
    amount = amount % 100;
    // by taking remainder we will get the remaining amount after taking 100 notes.
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
    getch();
    return 0;
}