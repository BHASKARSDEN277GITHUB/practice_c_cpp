#include<stdio.h>
#include<conio.h>

int main()
{
    //int *p ;
    char *p ;
    p = malloc(sizeof(char));
    *p='h' ;
    printf("%c \n",*p);
    getch();
    return 0 ;
}
