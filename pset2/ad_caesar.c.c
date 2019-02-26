#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
                                          //* Dan Nana Samaila Ahmed
int main(int argc, string argv[])
{

   int k=0;
   int c;


     if(argc!=2)
     {
         printf("insert your key which is not negation in promt space");
     }
     else
     {
         k=atoi(argv[1]);
         printf("%s",argv[1]);
     }
     if(k<1)
     {
     printf("please use positif") ;
     }
     string p = get_string(" write your text or message : ");
     if(p!=NULL)
     {
     for(int i=0,t=strlen(p);i<t;i++)
     {
         if(isalpha(p[i])&& isupper(p[i]))
         {
             printf("%c",c=(((p[i]+k)-65)%26)+65);
         }
         else if(isalpha(p[i])&&islower(p[i]))
         {
             printf("%c",c=(((p[i]+k)-97)%26)+97);
         }
         else
         {
             printf("%c",p[i]);
         }
     }
     }
     printf("\n");
}