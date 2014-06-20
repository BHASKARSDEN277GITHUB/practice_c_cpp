#include<stdio.h>
#include<malloc.h>


struct node {
		int data ;
		int sum;
		struct node * leftpointer;
		struct node * rightpointer;
};

struct node *root=NULL;

void insert();
void insertNow(int , struct node **);

int sum(struct node *);
void sumS(struct node *);

main()
{
	insert();
	int total ;
	total=sum(root);
	sumS(root);
}

void insert()
{
	int n ;
	int i ;
	scanf("%d",&n);
	while(n>0)
	{
		scanf("%d",&i);
		insertNow(i,&root);
		n--;
	}
}

void insertNow(int elem , struct node **cnode)
{
	if(*cnode==NULL)
	{
		*cnode=(struct node *)malloc(sizeof(struct node *));
		(*cnode)->data=elem;
		(*cnode)->leftpointer=NULL;
		(*cnode)->rightpointer=NULL;
	}
	else
	{
		if(elem<=(*cnode)->data)
		insertNow(elem , &(*cnode)->leftpointer);
		else
		insertNow(elem,&(*cnode)->rightpointer);
	}
}

int sum(struct node *cnode)
{
	int left  , right;
	if(cnode==NULL)
	return 0;
	else
	{
		left=sum(cnode->leftpointer);
		right=sum(cnode->rightpointer);	
		cnode->sum=left+right;
		
	}
	return cnode->sum+cnode->data;
}

void sumS(struct node *cnode)
{
	if(cnode==NULL)
	return ;
	else
	{
		sumS(cnode->leftpointer);
		sumS(cnode->rightpointer);
		printf("\n%d\n",cnode->sum);
	}
}

		
	
