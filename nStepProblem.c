// n steps .. clauclulate no of ways using 1 step and 2 steps ..

#include<stdio.h>
#include<conio.h>

#define n 5    //defining max size ..

main()
{
            int i = 0 ;
            int j = 1 ;
            int sum  = 0 ;
            int count = 0 ; //to count no of possible combinations ..
            for(i=0;i<=n;i++)
            {
                          sum = 0 ; //resetting value of sum to zero for every loop ..
                          sum = sum + i ; //using one '1' for first case and so on ..
                           
                           for(j=0;j<=n/2;j++) // only maximum n/2 '2's can be used to sum up n ..
                           {
                                              if(sum<n-1)
                                              {
                                                         sum +=2 ;
                                              }
                           }  
                           
                           if(sum==n)
                           {
                                     count++; 
                           }
            }
            
            printf("No of ways it can be done are : %d\n",count);
            getch();
}
