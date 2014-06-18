#include<stdio.h>
#include<conio.h>

int main()
{
    int i , check=0;
    for(i=1;i<=200;i++)
    {
                       if(i%3==0)
                       check++;
                       if(i%5==0)
                       check++;
                       
                       
                       if(check==1)
                       printf("%d \n",i);
                       
                       check =0 ;
    }
    getch();
    return 0 ;
}
