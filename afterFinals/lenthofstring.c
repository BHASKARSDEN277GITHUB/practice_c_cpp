#include<stdio.h>
#include<conio.h>
#include<malloc.h>

int calstr(char *);

main( )
{
     char *a;
     int l;
     printf("enter the string for calculating lenght\n");
     a=(char *)malloc(100);     
     gets(a);
     l = calstr ( a ) ;
     printf ( "\nstring is %s \tlength of string = %d", a, l ) ;
     getch();
}

int calstr ( char *b )
{
     int length = 0 ;
     while ( *b != '\0' )
     {
          length++ ;
          b++ ;
     }
     return ( length ) ;
}
