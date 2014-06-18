// implementation of stack data structure ..

#include<stdio.h>
#include<conio.h>

#define MAX 20 

void push(int) ;
int pop(void) ;

int stack[MAX];
int top = -1 ;
main()
{
      int choice ,  num ,num1;
      printf("Enter choice : \n0. to Exit\n1.to add Element\n2. to Remove Element\n");
      scanf("%d",&choice);
      while(1)
      {
                      switch(choice)
                      {
                          case 0:
                               exit(0);
                               
                          case 1:
                               if(top<MAX-1)
                               {
                                            printf("Enter element to add : ");                 
                                            scanf("%d",&num);
                                            push(num);
                                            //top++;
                               }
                               else
                               {printf("Stack Full ! \n");}
                               break;
                          case 2:
                               if(top == -1) //means empty stack ..
                               printf("Empty Stack ! \n");
                               
                               else
                               {
                               num1=pop();
                              // top--;
                               printf("Removed Element : %d\n",num1);
                               }
                               break;
                               
                                             
                      }     
                      printf("Enter choice : \n0. to Exit\n1.to add Element\n2. to Remove Element\n");
                      scanf("%d",&choice);                
      }
      
      
}


void push(int a)
{
        top++;
        stack[top]=a ; 
} 
int pop()
{
    return stack[top--];
}
