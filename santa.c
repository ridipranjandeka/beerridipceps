#include<stdio.h>
int main()
{
     int i,ch,counts[10] = {0};
     char str[100];

     scanf("%[^\n]",str);

     while((ch = str[i]) !='\0')
     {

              switch(ch)
              {
                    case'0':case'1':case'2':case'3':case'4':case'5':case'6':case'7':case'8':case'9':
                    counts[ch-'0']++;
                    break;
                    default:break;
              }
              i++;
     }
     


     for(i=0; i<10; i++)
     printf("%d---> %d\n",i,counts[i]);
     return 0;





}