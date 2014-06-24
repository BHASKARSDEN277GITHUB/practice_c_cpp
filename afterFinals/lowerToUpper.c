#include<stdio.h>
#include<conio.h>

int main()
{
    printf("Enter the string with all lower case letters \n");
    char *a ;
    char *b;
    int currentChar=0 ;
    gets(a);
    while(*a != '\0')
    {
             currentChar=*a-'0';
             currentChar+=32;
             sprintf(b,"%c",currentChar);
             a++;
             b++;
    }
    printf("%s",b);
    getch();
    return 0 ;
}
