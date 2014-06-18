#include<stdio.h>
#include<conio.h>

main()
{
      int num , sum=0 ,a,b ;
      scanf("%d",&num);
      while(num)
      {
                a=num%10;
                num=num/10;
                b=num%10;
                //num=num/10;
                sum=sum+a*b;
      }
      printf("%d",sum);
      getch();
}
