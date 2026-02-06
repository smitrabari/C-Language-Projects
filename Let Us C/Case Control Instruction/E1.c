#include<stdio.h>
int main()
{
    int c,f;
    printf("Choose Your Option - \n");
    printf("1. First Class\n");
    printf("2. Second Class\n");
    printf("3. Third Class\n");
    
    printf("Enter Your Class - ");
    scanf("%d",&c);
    printf("Enter No. of Subject You Failed - ");
    scanf("%d",&f);
    
    switch(c)
    {
        case 1:
        if(f>3)
        {
            printf("Does Not Get Grace in Any Subject!!\n");
        }
        else
        {
            printf("Congratulations!! You get grace of 5 Marks In Each Subject!!\n");
        }
        break;
        
        case 2:
        if(f>2)
        {
            printf("Does Not Get Grace in Any Subject!!\n");
        }
        else
        {
            printf("Congratulations!! You get grace of 4 Marks In Each Subject!!\n");
        }
        break;
        
        case 3:
        if(f>1)
        {
            printf("Does Not Get Grace in Any Subject!!\n");
        }
        else
        {
            printf("Congratulations!! You get grace of 5 Marks In Each Subject!!\n");
        }
        break;
        
        default:
        printf("Invalid Choice");
    }
    
    return 0;
}