#include<stdio.h>
#include<conio.h>

int main()
{
    int i =65 , k=65,j ;
    for(i=65 ;i<=75 ;i+=2)
    {        
             j=k;
             while(j<=i)
             {
                        printf("%c",j);
                        j++;
             }
             printf("\n");
             k++;
             
    }
    getch();
    return 0 ;
}
