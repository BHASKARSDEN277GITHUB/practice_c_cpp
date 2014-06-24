#include<stdio.h>
#include<conio.h>

main()
{
      int num , place ,biggest ;
      scanf("%d",&num);
      biggest=(int)num%10;
      place=1 ;
      while(num)
      {         
                biggest= biggest<num%10 ? biggest=num%10:biggest;
                if(biggest==num%10)
                {
                                   place++;
                }
                num=num/10;
                
      }
      
      printf("%d   %d",biggest,place);
      getch();
}
