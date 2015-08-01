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

int findnth(struct node *head , int n)
{
static int i=0;
struct node *temp = head;
 if(temp == NULL)
return;
findnth(temp->next , n);
if(++i == n)
{
printf("%d", temp->data);
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

findnth(head,3);
//printf("%d",x);
return 0;
}
