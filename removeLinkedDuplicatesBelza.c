//removing a linked list deuplicates using hashing ..

#include<stdio.h>
#include<malloc.h>
#define MAX 10	
struct node {
		int value ;
		struct node * pointer;
	
};

struct node *head=NULL;
struct node *hashTable[MAX]; //array of linked list pointers (as our hashtable )..

int searchNode(struct node *); //utility function to search the passed linked list node in hashtable ..
void insert(void); //utility function to create a linked list ..
void print(void); //utility function to print the linked list ..

main()
{
	struct node *cnode;
	struct node *prev;
	int flag;
	insert(); //iinserting elements in our linked list ..
	print(); //printing the linked list before removing duplicates ..
	
	cnode=head;
	
	//initializing hashTable values to NULL..
	
	for(flag=0;flag<10;flag++)
	{
		hashTable[flag]=NULL;
	}
	
        //removing the duplicates ..
	
	
	while(cnode!=NULL)
	{
		flag=searchNode(cnode);
		if(flag==1)
		{
			prev->pointer=cnode->pointer;
			cnode=cnode->pointer;
		}
		
		else
		{
			prev=cnode;
			cnode=cnode->pointer;
		}
	}
	
	print(); //printing the linked list after removing duplicates ..
}

void insert()
{
	int n , i ;
	printf("Enter number of elements to be inserted in the linked list : \n");
	scanf("%d",&i);
	struct node * node ;
	while(i>0)
	{
		scanf("%d",&n);
		if(head==NULL)
		{
			node=(struct node *)malloc(sizeof(struct node ));
			head=node ;
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
	struct node *cnode=head;
	while(cnode!=NULL)
	{
		printf("%d",cnode->value);
		cnode=cnode->pointer;
	}
	
	printf("\n");
}
	
	
int searchNode(struct node *cnode)
{
	int key;
	struct node *ccnode;
	key=(cnode->value)%9;
	ccnode=hashTable[key];
	
	if(ccnode==NULL)
	{
		ccnode=(struct node *)malloc(sizeof(struct node ));
		ccnode->value=cnode->value;
		ccnode->pointer=NULL;
		hashTable[key]=ccnode;
		
	
		return 0;
	}
	else
	{
		while(ccnode!=NULL)
		{
			if(ccnode->value==cnode->value)
			{
				return 1;
				printf("%d",cnode->value);
			}
			else
			{
				ccnode=ccnode->pointer;
			}
		}
		
		if(ccnode==NULL)
		{
			ccnode=(struct node *)malloc(sizeof(struct node));
			ccnode->value=cnode->value;
			ccnode->pointer=NULL;
			
			return 0;
		}
	}
}


//DONE ..
