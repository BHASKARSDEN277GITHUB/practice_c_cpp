#include<stdio.h>
#include<conio.h>

int main()
{
    int A = 65 ;
    for(A=65 ;A<=82 ;A++)
    {
             if(A%2 !=0)
             {
                    printf("%c",A);
             }
             else
             {
                 continue ;
             }
    }
    getch();
    return 0 ;
}
