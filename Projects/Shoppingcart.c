#include<stdio.h>
#include<string.h>
int main()
{
    /*
    here we have 5 items to represent to calculate the bill.
    we will take the item name, price, and quantity.
    then we just do TOTAL= PRICE X QUANTITY
    */
    char item [30]="";
    float price=0.0f;
    int quantity=0;
    float total=0.0f;
    char currency='$';
    printf("please enter the name of the item : ");
    fgets(item , sizeof(item), stdin);
    item[strlen(item) -1 ]='\0';
    
    printf("enter price of the item : ");
    scanf("%f",&price);

    printf("enter no. of items : ");
    scanf("%d",&quantity);

    total = price * quantity;
    printf("you ordered %d %s/s\n", quantity, item);
    printf("your bill is %c%.2f", currency, total);
    return 0;
}