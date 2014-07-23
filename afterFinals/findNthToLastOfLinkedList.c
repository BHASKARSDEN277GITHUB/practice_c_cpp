#include<stdio.h>
#include<malloc.h>


struct node {
		int data ;
		struct node *pointer;
};

struct node *head=NULL;
void insert(void); //utility function to insert elements to the linked list ..


//driver function to test the program ..
main()
{
	//calling the insert function ..
	insert();
	
	//main logic here to find nth element from the last ..
	printf("Enter value of n :\n");
	int n ;
	scanf("%d",&n);
	struct node *cnode=head;
	struct node *elementNode;
	int i=1;
	int elem;
	while(cnode!=NULL)
	{
		if(i<n)
		{
			cnode=cnode->pointer;
			i++;
		}
		if(i==n)
		{
			elementNode=head;
			cnode=cnode->pointer;
			i++;
		}
		else
		{
			cnode=cnode->pointer;
			elementNode=elementNode->pointer;
		}
	}

	elem=elementNode->data;
	printf("Required Node is : %d\n",elem);
}

void insert()
{
	struct node *cnode;
	printf("Enter number of elements you want to insert to the Linked List : \n");
	int n ;
	int i ;
	scanf("%d",&n);
	
	while(n--)
	{
		scanf("%d",&i);
		if(head==NULL)
		{
			head=(struct node *)malloc(sizeof(struct node));
			head->data=i;
			head->pointer=NULL;
			cnode=head;
		}
		else
		{
			cnode->pointer=(struct node *)malloc(sizeof(struct node));
			cnode=cnode->pointer;
			cnode->data=i;
			cnode->pointer=NULL;
		}
	}
}


