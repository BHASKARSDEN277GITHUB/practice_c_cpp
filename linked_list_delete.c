#include<stdio.h>
#include<conio.h>

void insert(int);
void deletenum(int);
void print(void);
struct linkedlist{
       int data ;
       struct linkedlist *pointer ;
       };
       
struct linkedlist *head =NULL ;
struct linkedlist * node;

int main()
{
    int choice ;
    printf("Enter choice : \n");
    printf("1 To insert number. \t 2 To delete number. \t 3 To Print List. \t 0 to exit.\n ");
    scanf("%d",&choice);
    int num ;
    
    while(choice != 0)
    {
                 switch(choice)
                 {
                 case 0 :
                      exit(0);
                 case 1 :
                      printf("Enter Number\n");
                      scanf("%d",&num);
                      insert(num);
                      break ;
                 case 2:
                      printf("Enter Number to delete \n");
                      scanf("%d",&num);
                      deletenum(num);
                      break ;
                 case 3:
                      print();
                      break;
                 default :
                         printf("Enter chloice\n");
                 }
                         printf("Enter choice\n");
                         printf("1 To insert number. \t 2 To delete number. \t 3 To Print List. \t 0 to exit. \n");
                         scanf("%d",&choice);
    }
           
               
    getch();
    return 0 ;
}       

void insert(int num)
{
     
    
     if(head==NULL)
     {
                   node=(struct linkedlist *)malloc(sizeof(struct linkedlist ));
                   node->data=num;
                   node->pointer=NULL;
                   head=node;
                   
     }
     else
     {
         node->pointer=(struct node *)malloc(sizeof(struct linkedlist));
         node=node->pointer;
         node->data=num;
         node->pointer=NULL;
        
     }
     
}
void deletenum(int num)
{    
     int a;
     int count =0;
     struct linkedlist *tnode;
     struct linkedlist *previousnode;
     tnode=head;
    
     while(tnode->data != num)
     {
          count++; 
          previousnode=tnode;
          tnode=tnode->pointer;
           
     }
     if(count==0)
     {
                 head=NULL;
                 
     }
     else
     {
         previousnode->pointer=tnode->pointer;
     }
}

void print(void)
{
     node=head;
     printf("%d\n",node->data);
     if(node==NULL)
     {printf("No element in list \n");}
     if(node->pointer==NULL)
     {printf("%d\n",node->data);}
     else
     {
     while(node->pointer !=NULL)
     {
                         
                         node=node->pointer;
                         printf("%d\t",node->data);
     }
     }
}
