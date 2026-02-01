#include<stdio.h>
#include<string.h>
int main()
{
    /*
    noun is a name of person, animal or a thing.
    verb is a action. like running and jumping.
    adjective describes something. like sweet and beautifull.
    */
   char noun[50]="";
   char verb[50]="";
   char adjective1[50]="";
   char adjective2[50]="";
   char adjective3[50]="";

   printf("enter a noun[name of animal or person] : ");
   fgets(noun, sizeof(noun), stdin);
   noun[strlen(noun) - 1]='\0';

   printf("enter a verb[action w/ -ing] : ");
   fgets(verb, sizeof(verb), stdin);
   verb[strlen(verb) - 1]='\0';

   printf("enter a adjective[action describing] : ");
   fgets(adjective1, sizeof(adjective1), stdin);
   adjective1[strlen(adjective1) - 1]='\0';

   printf("enter a adjective[action describing] : ");
   fgets(adjective2, sizeof(adjective2), stdin);
   adjective2[strlen(adjective2) - 1]='\0';

   printf("enter a adjective[action describing] : ");
   fgets(adjective3, sizeof(adjective3), stdin);
   adjective3[strlen(adjective3) - 1]='\0';

   printf("today i saw %s", noun);
   printf("\n%s was %s", noun, verb);
   printf("\n%s was %s , %s and %s", noun, adjective1,adjective2,adjective3);

   return 0;
}