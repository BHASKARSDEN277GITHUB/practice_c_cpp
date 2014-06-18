#include<stdio.h>
#include<conio.h>
#include<malloc.h>

void insertIntoList(int *);
struct list{
                  int element ;
                  struct list *next ; 
          };
int n ;
void printValues(void);
struct list *head =NULL;
struct list *node ;
//struct list *previous_node;
int main()
{
    //int n ;
    
    int i ;
    printf("Enter no. of integer values to insert in linked list \n") ;
    scanf("%d",&n);
    int values[n] ;
    printf("Enter values\n");
    for(i=0;i<n;i++)
    {
     scanf("%d",&values[i]);               
    }
    insertIntoList(values);
    printValues();
    
    getch();
    return 0 ;
      
}
void insertIntoList(int *p)
{
     //int position = 0 ;
     node = (struct list *)malloc(sizeof(struct list ));
     
     printf("%d",*p);
     node->element=*p;
     p++;
     head=node;
     
     printf("Inserted \n");
     node->next = NULL ;
    if(n>1)
    {
    while((n-1)!=0)
     {               
                     printf("Inserted \n");
                     //previous_node=node;
                     node->next = (struct list *)malloc(sizeof(struct list ));
                     node=node->next;
                     node->element=*p;
                     p++;
                     node->next=NULL;
                     n--;
                      
     }
     }
}
void printValues(void)
{    
     int i ;
     struct list *currentItem;
     currentItem=head ;
     //printf("%d",currentItem->next);
     printf("Printing Values of Linked List\n");
     while(currentItem != NULL)
     {                 
                i=(int)currentItem->element;      
                printf("%d\n",i);
                currentItem=currentItem->next ;      
     }
}
