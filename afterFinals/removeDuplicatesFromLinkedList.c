#include<stdio.h>
#include<malloc.h>

struct node {
		int data ;
		struct node * pointer;
};

struct node *head=NULL;
struct node *hashTable[10]; // hash table with 10 elements meaning indices from 0 to 9 ..
void insert(void); // utility function to insert elements in the linked list ..
void removeDuplicates(struct node *);//utitity function to remove elements from given linked list . given the head pointer to that lnked list ..
void print(struct node *); //utility function to print the elements  of new linked list where elements are no duplicate ..
int  addHash(struct node *); //utility function add elements into hash table .. returns 1 if successfully added else  0 if duplicate element ..

//driver program to test the code ..
main()
{
	insert();  //inserting elements to linked list ..
	print(head);
	
	
	//initializing hash table values to NULL;

	int n=0;
	while(n<9)
	{
		hashTable[n]=NULL;
		n++;
	}

	removeDuplicates(head);
	print(head);
}

void insert()
{
	int n ;
	int i ;

	scanf("%d",&n);
	printf("Enter elements : \n");
	struct node *cnode ;
	while(n--)
	{
		scanf("%d",&i);
		
		if(head==NULL)
		{
			head=(struct node *)malloc(sizeof(struct node ));
			head->data=i;
			head->pointer=NULL;
			cnode=head;
		}
		else
		{
			cnode->pointer=(struct node *)malloc(sizeof(struct node ));
			cnode=cnode->pointer;
			cnode->data=i;
			cnode->pointer=NULL;
		}
	}
}

int addHash(struct node *node1)
{
	int index ;
	struct node *cnode;
	index=(node1->data)%9;
	cnode=hashTable[index];
	printf("i got %d \n",node1->data);
	if(cnode==NULL)
	{
		cnode=(struct node *)malloc(sizeof(struct node ));
		cnode->data=node1->data;
		cnode->pointer=NULL;
		hashTable[index]=cnode;
		printf("InsertedToHashTable   %d \n",node1->data);
		return 1;
	}
	
	else
	{
		while(cnode!=NULL)
		{
			if(cnode->data==node1->data)
			{
				printf("removed\n");
				return 0;
			}
			else
			{
			cnode=cnode->pointer;
			}
		}
		if(cnode==NULL)
		{
			cnode=(struct node *)malloc(sizeof(struct node ));
			cnode->data=node1->data;
			cnode->pointer=NULL;
			printf("inserted\n");
			return 1;
		}
	}
}
void removeDuplicates(struct node *cnode)
{
	int status ;
	struct node *prev;
	struct node *temp;
	prev=NULL;
	if(cnode==NULL)
	return ;

	else
	{
		while(cnode!=NULL)
		{ 
			printf("Checking for %d  \n",cnode->data);

			status=addHash(cnode);
			if(status==0)
			{
					cnode=cnode->pointer;
					prev->pointer=cnode;
			}
			else
			{
				prev=cnode;
				cnode=cnode->pointer;
			}
		}
	}
}



void print(struct node *cnode)
{
	while(cnode!=NULL)
	{
		printf("%d  ",cnode->data);
		cnode=cnode->pointer;
	}
	
	printf("\n\n");
}
