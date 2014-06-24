#include<stdio.h>
#include<conio.h>

int main()
{
    int a , b , c ;
    int d; 
    scanf("%d%d%d",&a,&b,&c);
    
   d = (a<b ? a:b)<c ? (a<b?a:b):c ;
    printf("%d",d);
    
    
    getch();
    return 0 ;
    
}
