// swap elemets of a linked list pairwise ..

#include<stdio.h>
#include<malloc.h>


void doIt(void); //to swap the elements ..
void print(void) ; //to traverse and print the linked list ..
void insert(int) ; //to insert elements in the linked list ..

struct node{
		int value ;
		struct node *pointer ;
};

struct node * head=NULL ;
struct node *cNode ;

main()
{
	int i = 0 ;

	while(i<8)
	{
		insert(i+1);
		i++;
	}

	print();

	printf("\n");

	doIt(); //do the swapping task ..
	
	print(); //print the linked list ..
	
	printf("\n");
}

void insert(int n)  //inserting one value at a time ..
{
	if(head==NULL)
	{
		cNode=(struct node *)malloc(sizeof(struct node));
		head=cNode;
		cNode->value=n;
		cNode->pointer=NULL;				
	}	
	
	else
	{
		cNode->pointer=(struct node *)malloc(sizeof(struct node));
		cNode=cNode->pointer ;
		cNode->value=n ;
		cNode->pointer=NULL;	
	}
}

void doIt()
{	
	int temp ; //temporary variable for swapping ..
	
	struct node *lead=head;
	struct node *chase=NULL;

	while(lead->pointer!=NULL)
	{
		chase=lead;
		lead=lead->pointer;
		

		//swapping the alternate nodes's values ..

		temp=chase->value;
		chase->value=lead->value;
		lead->value=temp;
		if(lead->pointer!=NULL)
		{
		lead=lead->pointer;
		}				
	}
}

void print()
{
	struct node * current =head;
	while(current->pointer!=NULL)
	{
		printf("%d",current->value);
		current=current->pointer;		
	}
}


//DONE ..
