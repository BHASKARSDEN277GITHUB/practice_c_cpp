#include<stdio.h>
#include<malloc.h>

struct node {
	
		int data ;
		struct node * leftPointer;
		struct node * rightPointer;
};

struct node * root=NULL;


void insertElements(void);
void insert(int , struct node **);
void inorder(struct node *);
int K ;
main()
{
	printf("Enter no. of elements you want to insert in binary tree : \n");
	//inserting elements in the binary tree ..
	insertElements();
	//reding the value of K ..
	printf("Enter the value of K\n");
	scanf("%d",&K);
	//printing the elements inorder (increasing order)..
	inorder(root);
}

void insertElements()
{
	int n ;
	int i ;
	int elem ;
	i=0;
	
	scanf("%d",&n);
	while(i<n)
	{
		scanf("%d",&elem);
		insert(elem,&root);
		i++;
	}
}

void insert(int data, struct node **cnode)
{
	struct node *ccnode=*cnode;
	if(*cnode==NULL)
	{
		*cnode=(struct node *)malloc(sizeof(struct node));
		(*cnode)->data=data;
		(*cnode)->leftPointer=NULL;
		(*cnode)->rightPointer=NULL;
	}
	else
	{
		if(data<=(*cnode)->data)
		{
			insert(data,&((*cnode)->leftPointer));
		}
		else
		{
			insert(data,&((*cnode)->rightPointer));
		}
	}
}

void inorder(struct node *cnode)
{
	if(cnode==NULL||K<=0)
	return ;
	else
	{
		inorder(cnode->leftPointer);
		if(K<=0)
		return; 
		else
		{
			printf("%d\n",cnode->data);
			K--;
		}
		inorder(cnode->rightPointer);
	}
}
	
