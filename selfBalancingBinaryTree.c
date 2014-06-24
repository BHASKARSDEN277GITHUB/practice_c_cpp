#include<stdio.h>
#include<malloc.h>

struct node {
		int data ;
		struct node *leftpointer;
		struct node *rightpointer;
		int height;
};

// Function Prototypes ..

struct node *root=NULL;
void insert(void); // to read elements to be inserted in the tree iterartively ..
void insertIt(struct node **,int); // to actually insert the elements in the binary tree ..
struct node * leftRotate(struct node *);// to left rotate the subtree whose root is the argument node pointer ..
struct node * rightRotate(struct node *);// to right rotate the subtree whose root is the argument node ponter ..
int max(int ,int);// to return the max of two integer values ..
int getBalance(struct node *); // to return the balance factor of argument node ..
int height(struct node *); // to return the height of the argument node ..
void preOrderTraversal(struct node *); //to print the nodes values in inorder tree traversal ..

// main function to test the code ..

main()
{
	//insert the nodes to the tree ..
	insert();
	
	//Traverse the nodes in inorder traversal ..
	printf("\nTRAVERSING (PRE ORDER).....\n"); 
	preOrderTraversal(root);

	printf("\n");
}

void insert()
{
	int n ;
	int i ;
	printf("Enter number of elements you want to insert in the tree : \n");
	scanf("%d",&n);
	printf("\nINSERTING .....\n");
	while(n--)
	{
		scanf("%d",&i);
		insertIt(&root,i);
	}
}

void insertIt(struct node ** cnode , int data)
{
	if(*cnode==NULL)
	{
		*cnode=(struct node *)malloc(sizeof(struct node));
		(*cnode)->data=data;
		(*cnode)->leftpointer=NULL;
		(*cnode)->rightpointer=NULL;
		(*cnode)->height=1; //taking the height of leaf node as 1 ..
	}
	else
	{
		if(data<=(*cnode)->data)
		insertIt(&(*cnode)->leftpointer,data);
		else
		insertIt(&(*cnode)->rightpointer,data);
		
		// Now code for balancing part begins ..
	
		(*cnode)->height=max(height((*cnode)->leftpointer),height((*cnode)->rightpointer)) +1; // setting height of current node ..
		
		int bf=getBalance(*cnode);
		//Now rotations are done based upon the balance factor ..
	
		if(bf>1&&data<((*cnode)->leftpointer)->data)
		{
			*cnode=rightRotate(*cnode);
		}
		if(bf>1&&data>((*cnode)->leftpointer)->data)
		{
			(*cnode)->leftpointer=leftRotate((*cnode)->leftpointer);
			*cnode=rightRotate(*cnode);
		}
		if(bf<-1&&data>((*cnode)->rightpointer)->data)
		{
			*cnode=leftRotate(*cnode);
		}
		if(bf<-1&&data<((*cnode)->rightpointer)->data)
		{
			(*cnode)->rightpointer=rightRotate((*cnode)->rightpointer);
			*cnode=leftRotate(*cnode);
		}
	}
}
		
void preOrderTraversal(struct node *cnode)
{
	if(cnode!=NULL)
	{
		printf("%d (Balance Factor After Update %d)\n",cnode->data,getBalance(cnode));
		preOrderTraversal(cnode->leftpointer);
		preOrderTraversal(cnode->rightpointer);
	}
}
		
struct node * rightRotate(struct node * cnode)
{
	struct node * x=cnode->leftpointer;
	struct node * temp=x->rightpointer;
	
	// manupulate pointers now ..
	
	x->rightpointer=cnode;
	cnode->leftpointer=temp; 
	
	//update heights ..
	
	x->height=max(height(x->leftpointer),height(x->rightpointer))+1;
	cnode->height=max(height(cnode->leftpointer),height(cnode->rightpointer))+1;
	
	return x; //new root of this subtree ..
}

struct node * leftRotate(struct node * cnode)
{
	struct node * x=cnode->rightpointer;
	struct node * temp=x->leftpointer;
	
	//manupulate the pointers now ..
	
	x->leftpointer=cnode ;
	cnode->rightpointer=temp;
	
	// update heights ..
	
	x->height=max(height(x->leftpointer),height(x->rightpointer))+1;
        cnode->height=max(height(cnode->leftpointer),height(cnode->rightpointer))+1;
	
	return x;
}

int height(struct node *cnode)
{
	if(cnode==NULL)
	return 0;
	else
	return cnode->height;
}

int getBalance(struct node *cnode)
{
	return height(cnode->leftpointer) - height(cnode->rightpointer);
}

int max(int a  , int b)
{
	return (a>=b) ? a:b ;
}
