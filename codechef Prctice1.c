#include<stdio.h>
#include<conio.h>

void main()
{
     int i ;
     while(1)
     {           scanf("%d",&i);
                if(i!=42)
                printf("%d",i);
                else
                break;
     }
     getch();
     return ;
}
