#include<stdio.h>
#include<conio.h>

void main()
{
    int num , sum=0 ;
    scanf("%d",&num);
    while(num)
    {
              sum +=(int)num%10;
              num=(int)num/10;
              
    }
    printf("%d",sum);
    getch();
    
}
