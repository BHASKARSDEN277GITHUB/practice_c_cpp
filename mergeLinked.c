//merging linked two linked lists ..


#include<stdio.h>
#include<malloc.h>

struct node{
		int value ; //data value ..
		struct node *pointer ; //pointer to next node ..
};

void createList(struct node **);  //fuction to create a linked list .. 
void displayList(struct node *);  //fuction to displayt elements of linked list ..
void mergeList(struct node * , struct node *);  //fuction to merge elements of two linked lists on alternate positions ..

struct node * head1 =NULL;
struct node * head2 =NULL;

struct node * node ; 

main()
{
	//creating lists ..
	printf("Enter elements to first Linked List \n");
	createList(&head1);
	printf("Enter elements to secong linked list \n");
	createList(&head2);
		
	//displaying lists ..
	displayList(head1);
	displayList(head2);
	
	//merging lists ..
	mergeList(head1 , head2);
	
	//displaying new List ..
	displayList(head1);
}


void createList(struct node** head)
{
	int i = 0 ;
	int n ; 

	while(i<5)
	{
		scanf("%d",&n);
		
		if(*head==NULL)
		{
			node=(struct node*)malloc(sizeof(struct node));
			*head=node ;
			node->value=n;
			node->pointer=NULL;
		}
		else
		{
			node->pointer=(struct node*)malloc(sizeof(struct node));
			node=node->pointer ;
			node->value=n;
			node->pointer=NULL;		
		}
		
		i++;
	}	
}

void displayList(struct node *head)
{	
	struct node *cnode ; //current node ..
	cnode=head ;
	while(cnode->pointer!=NULL)
	{
		printf("%d",cnode->value);
		cnode=cnode->pointer ;
	}		
}

void mergeList(struct node *node1 , struct node* node2)
{
	struct node *temp1 ,*temp2 ;
	while(node1->pointer!=NULL &&node2->pointer!=NULL)
	{	
		temp1=node1->pointer ;
		temp2=node2->pointer ;

		node2->pointer=node1->pointer ;
		node1->pointer=node2 ;
		node2=temp2 ;
		node1=temp1 ;
	}
	
	if(node1->pointer==NULL&&node2->pointer!=NULL )
	{
		node1->pointer=node2 ;
	}
	else if(node2->pointer==NULL&&node1->pointer==NULL)
	{
		node1->pointer=node2 ;
	}
	else
	{//do nothing
	}
}s
