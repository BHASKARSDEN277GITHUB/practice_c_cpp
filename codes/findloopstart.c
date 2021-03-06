#include<stdio.h>
#include<stdlib.h>

struct node 
{
int data;
struct node *next;
};

void push(struct node **headref , int item)
{
struct node *temp =(struct node *)malloc(sizeof(struct node));
temp->data=item;
temp->next=(*headref);
(*headref) = temp;
}

void findloop(struct node *head)
{
struct node *fastptr = head;
struct node *slowptr = head;
int loopexists=0;
while(slowptr && fastptr)
{
fastptr=fastptr->next;
if(slowptr==fastptr)
{
loopexists=1;
break;
}
if(fastptr==NULL)
loopexists=0;
fastptr=fastptr->next;
if(slowptr==fastptr)
{
loopexists=1;
break;
}
slowptr=slowptr->next;
}

/*if(loopexists)
{
printf("loop found");
slowptr=head;
while(slowptr!=fastptr)
{
slowptr=slowptr->next;
fastptr=fastptr->next;
}
printf("%d",slowptr->data);
}*/
}

int main()
{
struct node *head = NULL;
push(&head,5);
push(&head,4);
push(&head,3);
push(&head,2);
push(&head,1);

head->next->next->next->next->next=head->next->next;
findloop(head);
//printf("%d",a->data);
return 0;
}
