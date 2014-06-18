// removing duplicates from a linked list ..

#include<stdio.h>
#include<malloc.h>

struct node {

		int value ; // value of linked list node ..
		struct node *pointer ; //pointer to next node ..

};

struct node * head =NULL; //head of the node ..
struct node * node ;  //pointer to a node .. 

void insert(); //function to insert nodes to the linked list ..
void removeD() ; //function to remove duplicates from the linked list ..
void print();//function to print the linked list ..
main()
{	
	printf("enter vlues to insert in linked list ..\n);
	insert();
	print() ; //printing the linked list before removing duplicates ..
	removeD();//removing the duplicates from the linked list ..
	print() ; //printing the linked list after removing the duplicate nodes ..
}

void insert()
{
	int n ;
	int i=5 ;
	while(i>0)
	{
		scanf("%d",&n);
		if(head==NULL)
		{	
			node=(struct node *)malloc(sizeof(struct node));
			head=node;
			node->value=n;
			node->pointer=NULL;
		}
		else
		{
			node->pointer=(struct node *)malloc(sizeof(struct node));
			node=node->pointer;
			node->value=n;
			node->pointer=NULL;
		}
		i--;
	}
}

void print()
{
	node=head;
	while(node!=NULL)
	{
		printf("%d",node->value);
		node=node->pointer;
	}
}

void removeD()
{
	
	struct node *prev;
	struct node *cnode=head;	
	int array
