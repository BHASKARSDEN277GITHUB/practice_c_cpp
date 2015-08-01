//program to implement stack using linklist
#include<stdio.h>
#include<stdlib.h>

struct node 
{
int data;
struct node *next;
} *top;

void pop(struct node **tope)
{struct node *var = (*tope);

if((*tope)==var)
{
struct node *temp = (*tope)->next;
free((*tope));
(*tope)=temp;
}

}


void push(struct node **head , int item)
{

struct node *temp = (struct node *)malloc(sizeof(struct node));
temp->data=item;
temp->next=(*head);
(*head) = temp;
top = (*head);
}

void printlist(struct node *top)
{
struct node *temp = top;
if(temp == NULL)
printf("stack empty\n");
else
{
while(temp!=NULL)
{
printf("%d \t",temp->data);
temp=temp->next;
}printf("\n");
}
}

int main()
{

struct node *head =NULL;

push(&head,5);
push(&head,4);
push(&head,3);
push(&head,2);
push(&head,1);
printlist(head);
pop(&top);
pop(&top);
pop(&top);
pop(&top);
pop(&top);
printlist(top);

//pop(&top);
return 0;
}
