#include<stdio.h>
#include<conio.h>

int main()
{
    int A = 65 ;
    int a = 97 ;
    int i = 1 ;
    int j = 4 ;
    int capA , smallA ;
    while(i<=6 && j>=-1)
    {
               for(capA=65;capA<65+i;capA++)
               {
                                            printf("%c",capA);
               }
               if(j>=0)
               {
               for(smallA=97+j;smallA>=97;smallA--)
               {
                                            printf("%c",smallA);       
               }
               }
               printf("\n");
               i++ ;
               j--;
    }
    getch();
    return 0 ;
}
