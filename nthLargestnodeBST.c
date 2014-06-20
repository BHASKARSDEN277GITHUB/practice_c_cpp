#include<stdio.h>
#include<malloc.h>

struct node {
		int data;
		struct node *leftpointer;
		struct node *rightpointer;
};

void insertBinary();
void insert(int , struct node**);
void printNth(struct node*);
struct node *root=NULL;
int k ;
main()
{
	insertBinary();
	printf("Enter value of K (Kth largest element) : \n");
	scanf("%d",&k);
	printNth(root);
	
}

void insertBinary()
{
	printf("Enter total elements in binary search tree : \n");
	int n ;
	int i =0;
	
	scanf("%d",&n);
	
	while(n>0)
	{
		scanf("%d",&i);
		insert(i,&root);
		n--;
	}
}

void insert(int n , struct node **cnode)
{
//	struct node *temp;
	if(*cnode==NULL)
	{
		*cnode=(struct node *)malloc(sizeof(struct node));
		
		(*cnode)->data=n;
		(*cnode)->leftpointer=NULL;
		(*cnode)->rightpointer=NULL;
	}
	else
	{
		if(n<=(*cnode)->data)
		insert(n,&((*cnode)->leftpointer));
		else
		insert(n,&((*cnode)->rightpointer));
	}
}

void printNth(struct node *cnode)
{
	if(k<=0||cnode==NULL)
	return;
	
	else
	{
		printNth(cnode->rightpointer);
		k--;
		if(k==0)
		printf("%d",cnode->data);
			
		printNth(cnode->leftpointer);
	}
}
	
		
	

