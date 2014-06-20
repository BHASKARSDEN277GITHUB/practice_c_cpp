#include<stdio.h>
#include<conio.h>

int main()
{
    int a ,d ;
    int k ;
    scanf("%d%d",&a,&k);
    while(k)
    {
            d=a%10;
            a=(int)a/10;
            
            k--;
    }
    printf("%d",d);
    getch();
    return 0 ;
}
