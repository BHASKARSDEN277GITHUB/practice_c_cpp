#include<stdio.h>
#include<stdlib.h>


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


void reverse(struct node **headref)
{
struct node *current = *headref;
struct node *prev = NULL;
struct node *next;

while(current != NULL)
{
next = current->next;
current->next=prev;
prev=current;
current=next;
}
*headref = prev;
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

reverse(&head);
printf("list after reverse");
printlist(head);
return 0;
}
