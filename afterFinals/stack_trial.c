#include<stdio.h>
#include<conio.h>
#define maxsize 100
int top = -1 ;

int main()
{
    int a ; 
    int stack[maxsize] ; 
scanf("%d",&a) ;
top = top +1 ; 
stack[top] = a ; 
printf("%d",stack[top]) ;
printf("%d",top) ; 
getch() ; 
return 0 ; 
}
    
    
