#include<stdio.h> 
#include<malloc.h>

struct node {
		int data ;
		struct node *leftpointer;
		struct node *rightpointer;
};

struct node *root=NULL;
void insert(int);
void insertIt(struct node **,int);
void traverse(struct node *,int *,int); // node pointer , array pointer , array size ..

main()
{
	printf("SIZE : ");
	int n ;//size of binary tree ..
	scanf("%d",&n) ;
	//array to store visited nodes ..
	int visited[n];
	int cIndex=0; //current index of the visited array ..
	insert(n);
	printf("\n\nRoot To Tree Traversal : \n\n");
	traverse(root,visited,cIndex);
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

void traverse(struct node *cnode,int *array,int cIndex)
{
	int i ; //iterator ..
	
	if(cnode->leftpointer==NULL&&cnode->rightpointer==NULL) //reached the leaf node ..
	{
		array[cIndex++]=cnode->data; //adding and printing the whole path .. 
		for(i=0;i<cIndex;i++)
		{
			printf("%d ",array[i]);
		}
		printf("\n");
	}
	else
	{
		array[cIndex++]=cnode->data; //just adding and going towards next node ..
		if(cnode->leftpointer!=NULL)
		traverse(cnode->leftpointer,array,cIndex);
		if(cnode->rightpointer!=NULL)
		traverse(cnode->rightpointer,array,cIndex);
	}
}
		


