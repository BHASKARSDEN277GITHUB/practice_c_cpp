#include<stdio.h>
#include<malloc.h>

struct node {
		int data ;
		int hori ;
		struct node *leftPointer;
		struct node *rightPointer;
};

struct hashNode {
			int data ;
			struct hashNode *pointer;
};

struct node *root=NULL;

void create(struct node **,int,int); //to create new binary tree node ..
void insert(void); // to supervise the binary tree creation procedure ..
void traverse(struct node *,struct hashNode **); //to traverse the binary and put the nodes's values in hashtable according to there horizontal values ..
void print(struct hashNode **); //to print all the values in vertical order ..
int max=0 , min=0;

main()
{
	//create the binary tree ..
	
	insert();
//	printf("%d\t%d\n",max,min);

	//create and initialize the hashtable ..
//	printf("%d",max-min+1);
	struct hashNode *hashtable[max-min+1];
	int i=0;
	for(i=0;i<max-min+1;i++)
	{
		hashtable[i]=NULL;
	}
	struct hashNode **hash=hashtable; //creating a pointer to first element of hashtable ..

	
	//start traversal of the binary and adding values to hashtable ..
	traverse(root,hash);
	print(hash);
}


void insert()
{
	int n , value;
	printf("Enter no . of elements to be inserted in the binary tree : \n");
	scanf("%d",&n);
	
	while(n--)
	{
		scanf("%d",&value);
		create(&root,value,0);
	}
}

void create(struct node **cnode,int value,int horizontal)
{
	if(*cnode==NULL)
	{
		*cnode=(struct node *)malloc(sizeof(struct node));
		(*cnode)->data=value;
		(*cnode)->hori=horizontal;
		printf("horizontal set to %d\n",(*cnode)->hori);
		(*cnode)->leftPointer=NULL;
		(*cnode)->rightPointer=NULL;

		//updating values of max and min ..
		if(horizontal>max)
		max=horizontal;
		else if(horizontal<min)
		min=horizontal;
	}
	else
	{
		if(value<=(*cnode)->data)
		{
			create(&(*cnode)->leftPointer,value,horizontal-1);
		}
		else
		{
			create(&(*cnode)->rightPointer,value,horizontal+1);
		}
	}
}

void traverse(struct node *cnode,struct hashNode ** hash)
{
	struct hashNode **hashnode;
	if(cnode==NULL)
	return ;
	else
	{
		int index=max-cnode->hori;
		printf("%d",index);
//		index=0;
		if(hash[index]==NULL)
		{
			hash[index]=(struct hashNode*)malloc(sizeof(struct hashNode));
			hash[index]->data=cnode->data;
			printf("done at index %d\n",index);
			hash[index]->pointer=NULL;
		}
		else
		{
		hashnode=(&hash[index]);

		//put in hashTable ..
		
		while(*hashnode!=NULL)
		{
			*hashnode=(*hashnode)->pointer;
		}

		*hashnode=(struct hashNode *)malloc(sizeof(struct hashNode));
		
		(*hashnode)->data=cnode->data;
		(*hashnode)->pointer=NULL;  	
		printf("done at %d\n",index);
	
		}
	//	printf("hello");
		traverse(cnode->leftPointer,hash);
		traverse(cnode->rightPointer,hash);
	}
}

void print(struct hashNode **hash)
{
	int i=0;
	struct hashNode *cnode;
	for(i=max-min;i>=0;i--)
	{
		cnode=hash[i];
		printf("At level %d\n",i);
		while(cnode!=NULL)
		{
			printf("%d",cnode->data);
			cnode=cnode->pointer;
		}
		printf("\n");
	}
}

