#include<stdio.h>
#include<malloc.h>

struct node {
	
		int data ; //assuming that binary tree holds int data values ..
		struct node * leftPointer ; //pointer to left child ..
		struct node * rightPointer ; //pointer to right child ..
};

struct node * root = NULL;

void insertElements(void) ; //utility function to insert values to binary tree ..
void LRD(struct node *) ; // for LRD traversal of the binary tree .. LRD means postorder traversal of the tree ..
void preorder(struct node *); //for preorder otraversal of the binary tree ..
void inorder(struct node *) ;; //for inorder otraversal of the binary tree ..
void insert(int,struct node **) ; // to insert the current int value to the binary tree ..

main()
{
	printf("Enter elements in the binary tree : \n");
	
	//calling the insert function ..
	
	insertElements();
	printf("Elements successfully entered \n");

	//printing the elements of binary tree .. (LDR TRAVERSAL) ..
	
	printf("Printing the elements of binary tree \n ");
	
	printf("POSTORDER TRAVERSAL : \n ");

	LRD(root);
	printf("\n");
	
	printf("PREORDER TRAVERSAL : \n");
	
	preorder(root);
	printf("\n");
		
	printf("INORDER TRAVERSAL : \n");
	
	inorder(root);
	printf("\n");
}

void insertElements()
{
	int n ;
	int elem ;
	printf("Enter number of elements you want to enter : \n ");
	
	scanf("%d",&n);
	
	int i=0;
	struct node *cnode=root ;
	
	while(i<n)
	{
		scanf("%d",&elem);
		insert(elem,&root);
		i++;
	}
}

void insert(int value,struct node ** croot)
{
	struct node *cnode=*croot;
	if(*croot==NULL)
		{
			cnode=(struct node *)malloc(sizeof(struct node ));
			*croot =cnode;
			cnode->data=value;
			cnode->leftPointer=NULL;
			cnode->rightPointer=NULL;
			printf("Inserted %d\n" , value);
		}
		else
		{
			if(cnode->data >= value)
			{
				insert(value,&cnode->leftPointer); //recursion here ..
			}
			else
			{
				insert(value,&cnode->rightPointer); //recursion here ..
			}
		}
}

void	LRD(struct node * cnode)
{
	if(cnode==NULL)
	return ;

	

		LRD(cnode->leftPointer); //recursion here ..
		LRD(cnode->rightPointer); // recursion here ..
		printf("%d",cnode->data);
	
}

void preorder(struct node * cnode)
{
	if(cnode==NULL)
	return ;
	
	
	else
	{
		printf("%d",cnode->data);
		preorder(cnode->leftPointer); //recursion here ..
		preorder(cnode->rightPointer); //recursion here ..
	}
}

void inorder(struct node * cnode)
{
	if(cnode==NULL)
	return ;
	else
	{
		inorder(cnode->leftPointer); //recursion here ..
		printf("%d",cnode->data);
		inorder(cnode->rightPointer); //recursion here ..
	}
}
		
