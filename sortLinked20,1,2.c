// program to sort a linked list of zero's , one's and two's ..




#include<stdio.h>
#include<malloc.h>

void insert(void) ; //fuction to insert elements in the linked list ..
void print(void) ; //fuction to proint elements in linked list ..
void sort(void) ; //fuction to sort wlwments in  the linked list ..


struct node{
		int value ;
		struct node *pointer ;
};

struct node *head=NULL ;
struct node *node ;


main()
{
	printf("Enter elements to insert in the linked list \n"); 
	insert() ; //iinserting elements in linked list ..
	print(); //printing the list before sorting ..
	sort(); //sorting the linked list ..
	printf("\n");
	print(); //printing the sorted list ..
	printf("\n");
}

void insert()
{	
	int n ;
	int i=0 ;
	while(i<5)
	{
	scanf("%d",&n);
	
	if(head==NULL)
	{
		node=( struct node *)malloc(sizeof(struct node)) ;
		head=node ;
		node->value=n ;
		node->pointer=NULL ;
	}
	else
	{
		node->pointer	=(struct node*)malloc(sizeof(struct node));
		node=node->pointer ;
		node->value=n;
		node->pointer=NULL;
	}
	i++;
	}
}

void print()
{
	struct node *cnode=head ;
	while(cnode!=NULL)
	{
		printf("%d",cnode->value);
		cnode=cnode->pointer ;
	}
}

void sort()
{
	struct node *z  , *o , *cnode ;
	int temp ;
		
	struct node *init = head ;
	z=o=NULL;
	cnode=head ;
	struct node *prev ;

	
	while(cnode !=NULL)
	{
		if(cnode->value==0&&z==NULL&&o==NULL)
		{
			z=init;
			temp=z->value;
			z->value=cnode->value;
			cnode->value=temp;
			prev=cnode;
			cnode=cnode->pointer;
		}	
		else if(cnode->value==0&&z==NULL&&o!=NULL)
		{	
			prev->pointer=cnode->pointer;
			cnode->pointer=init;
			head=cnode;
			init=head;
			z=init;
			cnode=prev->pointer;

		}	
		else if(cnode->value==0)
		{
			z=z->pointer ;
			temp=z->value;
			z->value=cnode->value;
			cnode->value=temp;
			prev=cnode;
			cnode=cnode->pointer;
		}	
		else if(cnode->value==1&&o==NULL&&z==NULL)
		{
			o=init;
			temp=o->value;
			o->value=cnode->value;
			cnode->value=temp;
			prev=cnode;
			cnode=cnode->pointer;
		}	
		else if(cnode->value==1&&o==NULL&&z!=NULL)
		{
			prev->pointer=cnode->pointer;
			cnode->pointer=init->pointer;
			init->pointer=cnode;
			o=init->pointer;
			cnode=prev->pointer;
		}
		else if(cnode->value==1)
		{
			o=o->pointer ;
			temp=o->value;
			o->value=cnode->value;
			cnode->value=temp;
			prev=cnode;
			cnode=cnode->pointer;
		}	
		else 
		{
			prev=cnode;
			cnode=cnode->pointer;
		}	
		
	}	

}


//DONE ..
