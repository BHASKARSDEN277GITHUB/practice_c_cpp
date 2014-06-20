//program to swap kth node from begining to kth node from end in a linked list ..

#include<stdio.h>
#include<malloc.h>


struct node {
		int value;
		struct node *pointer;
};

struct node *head =NULL;
struct node *node;

void insert(void); //fucntion to insert elements to linked list ..
void print(void) ; //fuction to print elements of linked list ..

void swap(void) ; //function to swap elements ..

main()
{
	printf("Enter elements to insert in linked list : \n");
	
	//calling insert functin ..
	insert();
	
	//printing linked list before swapping of elements ..
	print();
	
	//calling swap function ..
	swap();
	

	printf("\n");

	//printing elements after swapping of elements ..
	print();
}

void insert()
{
	int i = 0 ;
	int n ; 

	while(i<5)
	{
		scanf("%d",&n);
		
		if(head==NULL)
		{
			node=(struct node*)malloc(sizeof(struct node));
			head=node ;
			node->value=n;
			node->pointer=NULL;
		}
		else
		{
			node->pointer=(struct node*)malloc(sizeof(struct node));
			node=node->pointer ;
			node->value=n;
			node->pointer=NULL;		
		}
		
		i++;
	}	
}

void print()
{
	struct node * cnode=head;
	while(cnode!=NULL)
	{
		printf("%d",cnode->value);
		cnode=cnode->pointer;
	}
}

void swap()
{
	
	int count = 0 ;
	int k= 2 ; //swapping 2nd element from startin with 2nd element from end ..
	
	struct node *cnode=head ,*kb ,*ke ,*chase;
	int temp ;
	while(cnode!=NULL)
	{
		if(count==(k-1))
		{
			kb=cnode;
			count++;
			chase=head;
			cnode=cnode->pointer;
		}
		else if(count>k-1&&cnode->pointer!=NULL)
		{
			count++;
			chase=chase->pointer;
			cnode=cnode->pointer;
		}

		else if(cnode->pointer==NULL)
		{
			ke=chase->pointer;
			cnode=cnode->pointer;
		}
		else
		{
			cnode=cnode->pointer;
			count++;
		}
	}

	temp=ke->value;
	ke->value=kb->value;
	kb->value=temp;
}
