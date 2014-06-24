#include<stdio.h>
#include<malloc.h>


struct node {
		int data ;
		struct node *leftPointer;
		struct node *rightPointer;
};

struct node *root=NULL;

void insert(void); //utitlity function to insert elements to the linked list ..
void insertElement(struct node **,int); //utility fuction to allocate memory and insert value in binray tree ..

void expand(struct node *,int); //utility function to  perfrom the given task inthe  question ..

main()
{
	int k ;
	//inserting values to binray tree ..
	insert();
	
	
	//get value of k ..
	
	printf("Enter value of k \n");
	scanf("%d",&k);
	//calling expand function ..
	
	expand(root,k);
//	print(root);
}

void insert()
{
	int i , j ;
	
	i=0;
	while(i<7)
	{
		scanf("%d",&j);
		insertElement(&root,j);
		i++;
	}
}


void insertElement(struct node **cnode,int elem)
{
	if(*cnode==NULL)
	{
		*cnode=(struct node *)malloc(sizeof(struct node ));
		(*cnode)->data=elem;
		(*cnode)->leftPointer=NULL;
		(*cnode)->rightPointer=NULL;
	}
	else
	{
		if(elem<=(*cnode)->data)
		{insertElement(&(*cnode)->leftPointer,elem);
//		printf("going left\n");
		}
		else
		{insertElement(&(*cnode)->rightPointer,elem);
//		printf("going right\n");
		}
	}
//	printf("done\n");

}

void expand(struct node *cnode,int k)
{
	if(k==0)
	{
		printf("%d\t",cnode->data);
		return ;
	}
		
	
	else
	{	
		if(cnode->leftPointer!=NULL)
		expand(cnode->leftPointer,k-1);
		if(cnode->rightPointer!=NULL)
		expand(cnode->rightPointer,k-1);
	}
}

void print(struct node *cnode)
{
	if(cnode==NULL)
	return ;
	else
	{
		printf("%d\t",cnode->data);
		print(cnode->leftPointer);
		print(cnode->rightPointer);
	}
}
		
