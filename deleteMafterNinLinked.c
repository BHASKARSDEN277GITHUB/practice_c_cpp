//delete m nodes after every n nodes in a linked list ..
#include<stdio.h>
#include<malloc.h>

struct node {
		int value ;
		struct node *pointer;
	};

struct node * head ;
struct node * node ;

void insert(void); // to insert nodes in linked list ..
void delete(void); // to delete nodes in linked list ..

main()
{
	insert();
	delete();
	
	node=head;
	
	while(node!=NULL)
	{
		printf("%d",node->value);
		node=node->pointer;
	}
	printf("\n");
}

void insert()
{
	int n ;
	int i ;
	printf("Enter total number of nodes \n");
	scanf("%d",&n);
	while(n>0)
	{
		scanf("%d",&i);
		if(head==NULL)
		{
			node=(struct node*)malloc(sizeof(struct node));
			head=node;
			node->value=i;
			node->pointer=NULL;
		}
		else
		{
			node->pointer=(struct node *)malloc(sizeof(struct node *));
			node=node->pointer;
			node->value=i;
			node->pointer=NULL;
		}
		n--;
	}
}

void delete()
{
	int n =0 ;
	int m=1 ;  //this means one node will be deleted after every two nodes ..
	struct node * cnode ,* chase ;
	cnode=head;
	while(cnode!=NULL)
	{
		if(n<2)
		{
			n++;
			chase=cnode;
			cnode=cnode->pointer;
		}
		else if(n==2&&cnode!=NULL)
		{
			while(m!=0&&cnode!=NULL)
			{
		
				cnode=cnode->pointer;
				m--;
			}
			m=1;
			
			chase->pointer=cnode;
			n=0;
		}
	}
}

//DONE
