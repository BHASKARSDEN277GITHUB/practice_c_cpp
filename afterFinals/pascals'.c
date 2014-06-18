// pascal's triangle ..

#include<stdio.h>
#include<conio.h>

main()
{
      int a[20];
      int i = 0  ;
      int j = 1;
      int p = 0 ;
      int temp;
      while(i<10)
      {
                 
                 if(i==0||i==1)
                 {
                               a[i]=1;
                               printf("%d",a[i]);
                                printf("\n");
                               // i++;
                 }
                 else
                 {
                     j=1;
                     while(j<i)
                     {         
                                temp1=a[j];
                                temp=a[j-1];
                                a[j]=temp1+temp;
                                
                                 printf("%d",a[j]);
                                j++;          
                     
                     }
                    printf("\n");
                     a[j]=1;
                 }
                 
                
                  
                  i++;
                  
      }
      getch();
}
