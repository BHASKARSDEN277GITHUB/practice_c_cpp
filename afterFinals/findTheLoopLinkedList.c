#include<stdio.h>
#include<malloc.h>

struct node {
	
		int data ;
		struct node * pointer;
};

struct node * head=NULL;

void createNode(struct node **,struct node *,int); //utility function to create linked list node ..
void print(struct node *); // utility function to print linked list node ..


main()
{
	//creating the linked list .. 
	createNode(&head,NULL,1);
	createNode(&(head->pointer),NULL,2);

	struct node **cnode=&(head->pointer->pointer);
	struct node *node3 ;
	createNode(cnode,NULL,3);
	node3=*cnode;
	createNode(&((*cnode)->pointer),NULL,4);
	
	cnode=&((*cnode)->pointer->pointer);
	createNode(cnode,NULL,5);	
	createNode(&((*cnode)->pointer),node3,6);

	//printing the linked list node ..
	int i=10;
	struct node *cnode1=head;

	while(i--)
	{
		printf("%d\n",cnode1->data);
		if(cnode1->pointer!=NULL)
		cnode1=cnode1->pointer;
	}
	printf("\n");

			
	//finding the loop now ..
	struct node *tort=head;
	struct node *hare=head;

	while(hare!=NULL && tort!=NULL)
	{
		if(hare==NULL || tort==NULL)
		{
			printf("\nNo LOOP\n");
			break ;
		}
		else
		{
			if(hare->pointer!=NULL)
			hare=hare->pointer->pointer;
			
			tort=tort->pointer;
		}

		if(tort==hare)
		{
			printf("\nYes the LOOP exists \n");
			break;
		}
	}
			
	//finding the position where loop starts ..
	hare=head;
	while(1)
	{
		if(hare==tort)
		{
			printf("LOOP exists at %d\n",tort->data);
			break;
		}
		else
		{
			hare=hare->pointer;
			tort=tort->pointer;
		}
	}
}

void createNode(struct node **cnode,struct node *next,int data)
{
	*cnode=(struct node *)malloc(sizeof(struct node));
	(*cnode)->data=data;
	(*cnode)->pointer=next;
}
