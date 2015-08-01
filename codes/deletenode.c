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


void delete(struct node *ptr)
{
struct node *temp = ptr->next;
ptr->data = temp->data;
ptr->next = temp->next;
free(temp);
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

printf("list before deletion\n");
printlist(head);

delete(head->next->next);

printf("list after deletion\n");
printlist(head);
return 0;

}


