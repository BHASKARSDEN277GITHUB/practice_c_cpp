#include<stdio.h> 
#include<malloc.h>

struct node {
		int data ;
		struct node *leftpointer;
		struct node *rightpointer;
};

struct node *root=NULL;
void insert(int);
void insertIt(struct node **,int); //reference to node pointer ..
void countLeaves(struct node *); // node pointer ..
int count = 0 ; //global variable count to count total number of leave nodes .. 
main()
{
	printf("SIZE : ");
	int n ;//size of binary tree ..
	scanf("%d",&n) ;
	
	insert(n);	
	countLeaves(root);
	
	//printing total number of leaf nodes ..
	
	printf("\n\nNumber of leave Nodes are : \n\n");
	printf("\n%d\n\n",count);
}

void insert(int n)
{
	int value;
	while(n--)
	{
		scanf("%d",&value);
		insertIt(&root,value);
	}
}

void insertIt(struct node **cnode,int value)
{
	if(*cnode==NULL)
	{
		*cnode=(struct node *)malloc(sizeof(struct node));
		(*cnode)->data=value;
		(*cnode)->leftpointer=NULL;
		(*cnode)->rightpointer=NULL;
	}
	else
	{
		if(value<=(*cnode)->data)
		insertIt(&(*cnode)->leftpointer,value);
		else
		insertIt(&(*cnode)->rightpointer,value);
	}
}

void countLeaves(struct node *cnode)
{
	if(cnode!=NULL) // to check the case if there is no node in the tree ..
	{
	if(cnode->leftpointer==NULL&&cnode->rightpointer==NULL) //reached the leaf node ..
	{
		count++ ;
		//uncomment to print the leaf nodes ..
	//	printf("%d",cnode->data); 
	}
	else
	{
		if(cnode->leftpointer!=NULL)
		countLeaves(cnode->leftpointer);
		if(cnode->rightpointer!=NULL)
		countLeaves(cnode->rightpointer);
		
	}
	}
}
		


