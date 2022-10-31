#include<stdio.h>
#include<string.h>

int main()
{
        char str[100], rev[100];
        int i, j, len;

        printf("input a string to reverse: ");
        scanf("%[^\n]",str);

        len = 0;
        i = 0;
        while(str[i] != '\0'){ 
             len++;
             i++;

        }
        
        for(j=0,i=len-1; i>=0; i--,j++)
        {
            rev[j] = str[i];
        }
        rev[i] ='\0';
    
        printf("The reverse is :%s\n",rev);
        return 0;



}