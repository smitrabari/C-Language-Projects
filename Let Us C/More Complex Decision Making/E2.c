// CMYK color model conversion from RGB values
#include<stdio.h>
#include<math.h>
int main()
{
    int R,G,B;
    float white,c,m,y,k;
    float r,g,b;
    printf("Enter value of R - ");
    scanf("%d",&R);
    printf("Enter value of G - ");
    scanf("%d",&G);
    printf("Enter value of B - ");
    scanf("%d",&B);

    r=R/255.00;
    g=G/255.00;
    b=B/255.00;

    white = fmax(r,fmax(g,b));

    if(white == 0)
    {
        c=m=y=0;
        k=1;
    }
    else 
    {
        c=((white-r)/white);
        m=((white-g)/white);
        y=((white-b)/white);
        k=1-white;
    }
    
    printf("CMYK values:\n");
    printf("C = %.2f\n", c);
    printf("M = %.2f\n", m);
    printf("Y = %.2f\n", y);
    printf("K = %.2f\n", k);

    return 0;
}