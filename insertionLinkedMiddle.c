#include<stdio.h>
#include<malloc.h>

struct node {
		int value ; //value of linked list node ..
		struct node * pointer ; //pointer to next node ..
};
struct node *head=NULL ; //head pointer to the linked list node ..
struct node *node ; //utility pointer to the node ..

void insert(void); //function to insert nodes into the linked list ..
void print(void); //function to print the linked list node values ..

void insertMiddle() ; //function to insert node in the middle of the linked list ..

main()
{
	insert();
	//printing the linked list before entering the element to the middle of linked list ..
	print();
	//iinserting the element in the middle of the linked list ..
	insertMiddle();
	//printing the updated linked list ..
	print();
}

void insert()
{
	int i , n ;
	printf("Enter number of nodes you want to insert : \t");
	scanf("%d",&i);
	printf("Enter the values of the nodes \n");
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
			node->pointer=(struct node *)malloc(sizeof(struct node ));
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

void insertMiddle()
{
	int n;
	struct node *lead , *chase;
	printf("Enter Number to be inserted in middle : \t");
	scanf("%d",&n);
	lead=head;
	chase=head;
	while(lead!=NULL)
	{
		lead=lead->pointer;
		if(lead!=NULL)
		{
			lead=lead->pointer;
		
			if(lead!=NULL)
			{
				chase=chase->pointer;
			}
		}
	}
	node=(struct node *)malloc(sizeof(struct node));
	node->value=n;
	node->pointer=chase->pointer;
	chase->pointer=node;
}

//	done
