#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 70 ;
    int j;
    for(j=70;j>=65;j--)
    {
                       for(i=65;i<=j;i++)
                       {
                                         printf("%c",i);
                       }
                       printf("\n") ;
    }
    getch();
    return 0 ;
}
