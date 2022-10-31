#include<stdio.h>
#include<ctype.h>

int main()
{
   char str[100];
   printf("Input a string to convert case:");
   scanf("%[^\n]", str);

   int i=0;
   while((str[i]) !='\0'){
             if(isupper(str[i]))
             { 
                str[i] = tolower(str[i]);
             }
             else{
                str[i] = toupper
               (str[i]);

             }
             i++;

             }
             printf("after conversion : %s\n",str);
             return 0;

   }
   

   




