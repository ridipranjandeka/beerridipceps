#include<stdio.h>
int main()
{
    int marks;
    printf("Enter marks(0-100)"    );
    scanf("%d",&marks);
    if(marks <= 30){
         printf("Fail");
     }else{
        printf("Pass");
     }
     return 0;
}