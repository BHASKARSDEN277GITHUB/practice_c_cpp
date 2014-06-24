#include<stdio.h>
#include<conio.h>
#include<math.h>
int checkprime(int);
int main()
{
    int i ;
    int check ;
    for(i=1;i<=100;i++)
    {
             check = checkprime(i);
             if(check==1)
             printf("%d is PRIME \n",i) ;
             else
             printf("%d is NOT PRIME \n",i);  
    }
    getch();
    return 0 ;
}
int checkprime(int num)
{
    int root = sqrt(num);
    int checknum =0;
    int j ;
    for(j=2;j<=root;j++)
    {
            if(num%j ==0)
            {
                     checknum++;
            }        
    }
    if(checknum==0)
    {
                   return 1 ;
    }
    else
    return 0 ;   
}
