#include<stdio.h>
#include<malloc.h>

struct node {
		int data ;
		struct node * pointer;
	
};

struct node *head1=NULL;
struct node *head2=NULL;
struct node *sumHead=NULL;

void reverseList(struct node **);
struct node * sumList();
void createList(struct node **);
void printList(struct node *);
main()
{
	printf("Enter first number to the linked list\n");
	createList(&head1);
	printf("Enter second number to the linked list \n");
	createList(&head2);
	
	sumHead=sumList(head1,head2);
	printList(sumHead);
}

void createList(struct node **head)
{
	int i , j ;
	i=4;
	struct node *cnode;
	while(i>0)
	{
		scanf("%d",&j);
		if(*head==NULL)
		{
			cnode=(struct node *)malloc(sizeof(struct node));
			*head=cnode;
			cnode->data=j;
			cnode->pointer=NULL;
		}
		else
		{
			cnode->pointer=(struct node *)malloc(sizeof(struct node));
			cnode=cnode->pointer;
			cnode->data=j;
			cnode->pointer=NULL;
		}
		i--;
	}
}

void reverseList(struct node **head)
{
	struct node *prev=NULL;
	struct node *temp;
	struct node *cnode=*head;
	while(cnode!=NULL)
	{
		if(prev==NULL)
		{
			temp=cnode->pointer;
			cnode->pointer=NULL;
			prev=cnode;
			cnode=temp;
		}
		else
		{
			temp=cnode->pointer;
			cnode->pointer=prev;
			prev=cnode;
			
			cnode=temp;
			
		}
	}
	
	*head=prev;
}


struct node * sumList()
{
	struct node *newLN=NULL;
	int i=0,j=0;
	int k;
	int carry=0;
	reverseList(&head1);
	reverseList(&head2);
	
	printList(head1);
	printList(head2);
	
	struct node *cnode1=head1;
	struct node *cnode2=head2;

	while(cnode1!=NULL &&cnode2!=NULL)
	{
		i=0;
		j=0;
		
		if(cnode1!=NULL)
		i=cnode1->data;
		
		if(cnode2!=NULL)
		j=cnode2->data;
		
		k=carry+i+j;
		carry=k/10;
		k=k%10;
	
		if(newLN==NULL)
		{
			newLN=(struct node *)malloc(sizeof(struct node));
			sumHead=newLN;
			newLN->data=k;
			newLN->pointer=NULL;
		}
		else
		{
			newLN->pointer=(struct node*)malloc(sizeof(struct node));
			newLN=newLN->pointer;
			newLN->data=k;
			newLN->pointer=NULL;
		}
	
		cnode1=cnode1->pointer;
		cnode2=cnode2->pointer;

	}
	
	if(carry!=0)
	{
		newLN->pointer=(struct node *)malloc(sizeof(struct node));
		newLN=newLN->pointer;
		newLN->data=carry;
		newLN->pointer=NULL;
	}
	
	reverseList(&sumHead);
	return sumHead;
}

void printList(struct node *cnode)
{
	while(cnode!=NULL)
	{
		printf("%d",cnode->data);
		cnode=cnode->pointer;
	}
	printf("\n");
}
