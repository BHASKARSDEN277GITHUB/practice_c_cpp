#include<stdio.h>
main()
{
	int i , j , k , t , N , sum=0 ;
  	scanf("%d",&t);
  	int count=0 ;
  	while(t>0)
      {
      scanf("%d",&N);
  	for(k=0;k<=N;k+=3)
    {
     
      sum=sum+k;
       if(sum==N){count++;}
      	for(j=0;j<=N&&sum<N;j+=2)	
          {
          
           sum=sum+j;
          if(sum==N)
          {count++;}
          	for(i=0;i<=N&&sum<N;i++)
              {
              
              sum=sum+i;
              if(sum==N)
              {count++;}
            }
          if(sum>=N)
            sum=0;
        }
      if(sum>=N)
        sum=0;
      	
    }
      t--;
      
      printf("%d",count);
      count=0;
    }
  }
