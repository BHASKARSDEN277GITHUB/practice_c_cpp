#include<stdio.h>
#include<conio.h>

int main()
{
    int a , b , result ;
    scanf("%d%d",&a,&b);
    a = a*a ;
    b = b*b*b ;
    result = a+b ;
    printf("%d",result);
    
    getch();
    return 0 ;
}
