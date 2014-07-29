#include<stdio.h>
#include<malloc.h>

struct node {
		int data ;
		struct node * leftpointer;
		struct node * rightpointer ;
};

struct node *root=NULL;

void traverse(struct node *,int);
void insert(void);
void insertIt(struct node **,int);
int isRequired(struct node *,int); //to check if given node is required to print  ..

//Main function ..

main()
{
	int k ;

	//create binary tree ..

	insert();

	//traverse it according to the problem ..

	printf("Enter value of K : \n");
	scanf("%d",&k);
	traverse(root,k);
	
	printf("\n");
	
}

void insert()
{
	int n; 
	printf("Enter total elements in binary tree : \n");
	scanf("%d",&n);
	int value;
	while(n--)
	{
		scanf("%d",&value);
		insertIt(&root,value);
	}
}
void insertIt(struct node ** cnode,int value)
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

void traverse(struct node * cnode,int k)
{
	int check =-1;

	if(cnode==NULL)
	return ;
	
	//else
	
	check=isRequired(cnode,k);
	if(check==1)
	printf("%d\t",cnode->data);
	
	traverse(cnode->leftpointer,k);
	traverse(cnode->rightpointer,k);
}
	

int isRequired(struct node *cnode,int k)
{
	int check1=-1 ;
	int check2=-1;

	if(k==0)
	{
		if(cnode->leftpointer==NULL&&cnode->rightpointer==NULL)
		return 1;
		else
		return 0;
	}
	if(cnode->leftpointer==NULL&&cnode->rightpointer==NULL)
	{
		if(k==0)
		return 1 ;
		else
		return 0;
	}
	
	if(cnode->leftpointer!=NULL)
	check1=isRequired(cnode->leftpointer,k-1);
	if(cnode->rightpointer!=NULL)
	check2=isRequired(cnode->rightpointer,k-1);

	if(check1==1||check2==1)
	return 1;
	else
	return 0;
}
	

