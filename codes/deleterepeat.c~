#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

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


void delete(struct node *head)
{
struct node *current = head;

if(current == NULL)
return;
struct node *next; // next pointer of the node to be deleted

while(current->next!=NULL)
{
if(current->data == current->next->data)
{
next = current->next->next;
free(current->next);
current->next = next;
}
else
{
current=current->next;
}
}

}


int main()
{
struct node *head = NULL;
push(&head,5);
push(&head,4);
push(&head,3);
push(&head,2);
push(&head,1);
push(&head,1);
push(&head,1);

printf("list before deletion\n");
printlist(head);
delete(head);
printf("the list after deletion\n");
printlist(head);
return 0;
}
