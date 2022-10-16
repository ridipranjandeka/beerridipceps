#include<stdio.h>
int main()
{
    char str[100], strcp[100];
    int len=0, i=0, j=0;

    scanf("%[^\n]", str);

    while(str[i] != '\0')
    {
        strcp[j] = str[i];
        i++;
        j++;
    }    
    strcp[i] = '\0';

    printf("copied %s ", strcp);
    return 0;

}












