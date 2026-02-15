/*Clock is a device used to measure and indicate time.
It is a common observation that the clock shows 12:00 at noon and midnight.
Write a program to print the time in 24-hour format along with 
the corresponding 12-hour format and the indication of AM, PM, NOON, or MIDNIGHT.*/
#include<stdio.h>
#include<math.h>
int main()
{
    for(int x=0;x<=23;x++)
    {
        for(int y=0;y<=59;y++)
        {
            if(x==12 && y==0)
            {
                printf("%02d:%02d\tNOON\t\n",x,y);
            }
            else if(x==0 && y==0)
            {
                printf("%02d:%02d\tMIDNIGHT\t\n",x,y);
            }
            else if(x<=12 && x>=0)
            {
                printf("%02d:%02d\tAM\t\n",x,y);
            }
            else if(x<=23 && x>=12)
            {
                printf("%02d:%02d\tPM\t\n",x,y);
            }
            else 
            {
                printf("%02d:%02d\t\t\n",x,y);
            }
        }
    }
    return 0;
}