#include<stdio.h>
#include<conio.h>

int main()
{
    int a[4] ;
    int i ;
    for(i=0;i<4;i++)
    {
                    scanf("%d",&a[i]);               
    }
    for(i=3;i>=0;i--)
    {
                    printf("\n%d",a[i]);               
    }
    getch();
    return 0 ;
}
