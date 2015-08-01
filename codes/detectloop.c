#include<stdio.h>
#include<stdlib.h>
#define bool int 

struct node
{
int data;
struct node *next;
};


void push(struct node **headref , int item)
{
struct node *temp = (struct node *) malloc(sizeof(struct node));
temp->data=item;


temp->next = (*headref);
(*headref) = temp; 
}


void printlist(struct node *head)
{
struct node *temp = head;
while(temp!=NULL)
{
printf("%d \t",temp->data);
temp = temp->next;
}
printf("\n");
}


bool detectloop(struct node *head)
{
struct node *fastptr = head;
struct node *slowptr = head;

while(slowptr && fastptr && fastptr->next)
{
slowptr=slowptr->next;
fastptr= fastptr->next->next;
if(slowptr == fastptr)
{
printf("loop detected");
return 1;
}
}
return 0;
}

int main()
{
struct node *head = NULL;
push(&head,5);
push(&head,4);
push(&head,3);
push(&head,2);
push(&head,1);

printf("list before reversion\n");
printlist(head);

head->next->next->next->next=head;

if(detectloop(head))
printf("loop detected");
else 
printf("no loop");
return 0;
}




