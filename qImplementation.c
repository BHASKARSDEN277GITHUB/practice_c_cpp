//implementing quee data structure ..

#include<stdio.h>
#include<conio.h>

#define MAX 10

void addElement(int) ;
int removeElement(void);

int q[MAX];
int rear , front ;

main()
{
      int choice ,  num ;
      rear=(front=-1);
      printf("Enter choice : \n0. to Exit\n1.to add Element\n2. to Remove Element\n");
      scanf("%d",&choice);
      while(1)
      {
                      switch(choice)
                      {
                          case 0:
                               exit(0);
                               
                          case 1:
                               if(rear<MAX-1)
                               {
                                             printf("Enter element to add : ");
                                             scanf("%d",&num);
                                             addElement(num);
                               }                 
                               else
                               printf("Q FULL \n");
                               break;
                          
                          case 2:
                               if(rear==front&&rear==-1)
                               {
                                              printf("Empty Q") ;
                                              
                               }
                               else if(rear=front &&rear!=-1)
                               {
                                   num=removeElement();
                                   printf("Removed Element : %d \n",num);
                                   
                               }
                               else
                               
                               {
                                   num=removeElement();
                                   printf("Removed Element : %d \n",num);
                               }
                               
                                             
                      }     
                      printf("Enter choice : \n0. to Exit\n1.to add Element\n2. to Remove Element\n");
                      scanf("%d",&choice);                
      }
      
      
}


void addElement(int num)
{
     if(rear==-1)
     {
                 front++;
                 rear++;
                 q[rear]=num;                 
     }
     else
     {
         rear++;
         q[rear]=num;
     }
}

int removeElement()
{
    
    return q[front++];
    
}
