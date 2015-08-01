// program to check whetther a list is a palindrome or not using array
#include<stdio.h>
#include<stdlib.h>
#define bool int

struct node
{
char data;
struct node *next;
};


void push(struct node **headref , char item)
{
struct node *temp = (struct node *) malloc(sizeof(struct node));
temp->data=item;
temp->next = (*headref);
(*headref) = temp; 
}
bool check(struct node *head , int size)
{
char array[size-1];
int top=0;
struct node *temp = head;
while(temp!=NULL)
{
array[top] = temp->data;
temp = temp->next;
top++;
}

int j = size-2;
printf("%c \n",array[j]);

while(head!=NULL)
{
if(array[j] == head->data)
{
head=head->next;
j--;
}
else
return 0;
}

return 1;
}

/*void printlist(struct node *head)
{
struct node *temp = head;
while(temp!=NULL)
{
printf("%d \t",temp->data);
temp = temp->next;
}
printf("\n");
}*/


int main()
{
struct node *head = NULL;
char str[] = "abcddcba";
int size = sizeof(str)/sizeof(str[0]);
int i;
for(i=0;str[i]!= '\0';i++)
{
push(&head,str[i]);
}

if(check(head ,size))
printf("is a palindrome");
else
printf("not a palindrome");
return 0;
}



