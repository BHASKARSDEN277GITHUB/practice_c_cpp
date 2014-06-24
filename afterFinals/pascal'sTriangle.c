#include<stdio.h>
#include<conio.h>

int main()
{
    int s=1 , i=1;
    int limit ;
    int sum ;
    while(i<=10)
    {
                limit=i ;
                sum=1;
                if(limit>1)
                {
                while(sum<=limit)
                {
                             //sum++;
                             printf("%d",sum);
                             sum++;             
                }
                sum=sum-2; //sum is '4' here for i=3 , as '3' is already printed ,we need to have sum = 2
                while(sum>=1)
                {
                             printf("%d",sum);
                             sum--;
                }
                }
                else
                printf("%d",limit);
                
                printf("\n");
                i++;
    }
    getch();
    return 0 ;
}
