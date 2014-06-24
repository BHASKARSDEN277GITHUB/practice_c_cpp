#include<stdio.h>
#include<conio.h>

int main()
{
    printf("Enter the String \n");
    char string[10] , stringReverse[10] ;
    char *p1,*p2 ;
    
    scanf("%s",&string);
    p1=string;
    int count = 0;
    while(*p1 != '\0')
    {
              count++ ;
              p1++ ;
    }
    p1 = string ;//again assinging base address of string to pointer variable p1 ..
    p2=stringReverse ;
    while(count--)
    {
             *p2=p1[count] ;
              p2++ ;
    }
    printf("%s",stringReverse);
    
    getch();
    return 0 ;
}
