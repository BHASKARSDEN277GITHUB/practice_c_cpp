#include<stdio.h>
#include<conio.h>
#define maxsize 100
int top = -1 ;

int main()
{
int a ; 
int stack[maxsize] ;
printf("Enter element to  be pushed \n "); 
scanf("%d",&a) ;
top = top +1 ; 
stack[top] = a ; 
printf("the first element in stack is \t%d\n",stack[top]) ;
printf("The new value of top is \t %d",top) ; 
getch() ; 
return 0 ; 
}
    
    
