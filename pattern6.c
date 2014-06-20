#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 70 ;
    int limit = 0 ;
    while(limit<=5)
    {
                   for(i=70-limit;i<=70;i++)
                   {
                            printf("%c",i);                
                   }
                   printf("\n");
                   limit++ ;
    }
    getch();
    return 0 ;
}
