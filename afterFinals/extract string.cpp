#include<stdio.h>
#include<conio.h>

char * extractString(char * , int , int);
char string2[20];  //for return string ..
int main()
{
    char string[20] ;
    int n , m ;
    char *p ; //for returning string ..
    printf("Enter the string \n");
    scanf("%s",string);
    printf("Enter the charrater positions(start and end) to extract the new String \n") ;
    scanf("%d%d",&n,&m);
    p=extractString(string,n,m);
    printf("The extracted string is :    ");
    while(*p != '\0')
    {
             printf("%c",*p);
             p++;
    }
    
    getch();
    return 0 ;
}

 char * extractString(char *p , int n , int m)
{
    // char string2[20];
     int i ; //for old string ..
     int j =0 ; //for new string ..
     for(i=n-1;i<m;i++)
     {
                       string2[j]=p[i];
                       j++;
     }
     return string2 ;
}
