#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *fp ;
    fp =fopen("source.c","r");
    char c =fgetc(fp);
    while(c!=EOF)
    {
                 printf("%c",c);
                 c=fgetc(fp);
    }
    close(fp);
    getch();
    return 0 ;
    
}
