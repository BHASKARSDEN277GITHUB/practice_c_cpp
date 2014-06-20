// linked list program 1 .. Given a linked list, reverse alternate nodes and append at the end .. //geeksforgeeks ..

#include<stdio.h>
#include<malloc.h>

struct node{
		int value ;
		struct node *pointer ;
};

struct node *head=NULL ; //creating head pointer . Initializing to NULL ..

struct node *end=NULL;	//creating pointer to end node . Initializing to NULL ..


struct node* cNode ;

void insert(int); //function to insert elements to linked list ..
void doIt(void);	//fucntion to do the given task ..
void traverse(void); //to traverse the linked list ..

int count ;


main()
{
	//printf("Enter elements to insert in linked list \n");
	int i =0 ;
	
	count=0; //to count number of nodes .. Because end node here will change every time on appending ..
	
	//inseting elements to linked list ..
	while(i<6)
	{
		
		insert(i+1);
		i++;
	}

	doIt(); //doing the task ..
	traverse();
}

void insert(int n)
{
	
	if(head==NULL)
	{
		cNode=(struct node *)malloc(sizeof(struct node )); //allocating a new node(memory).. dynamic allocation ..
		head=cNode;
		cNode->value=n;
		cNode->pointer=NULL;
		end=cNode;
		count++;		
	}
	else
	{
		cNode->pointer=(struct node*)malloc(sizeof(struct node ));
		cNode=cNode->pointer;
		cNode->value=n;
		cNode->pointer=NULL;
		end=cNode;
		count++; //incrementing node count ..					
	}	
		
}

void doIt()  //appending to last ..
{
			
	struct node *current = head;
	struct node *temp = NULL ; //a temporary pointer  to node to be appended at last ..
	
	
	int i =0;	
	
	while(i<count)
	{
		if(i%2==0)
		{
			//do nothing ..			
		}		
		else
		{
			temp=current->pointer ; //enen node or alternate node ..
			current->pointer=temp->pointer ;	//doing task of removal ..
			current=current->pointer;	//shifting current node to next to alternate .. 1->3 ..
			end->pointer=temp;	//changing end pointer ..
			end=end->pointer ;
			end->pointer=NULL;				
		}
		i++;
	}
	
}

void traverse(void)  //traversing the linked list ..
{
		struct node *trave=head ; //node pointer for traversal ..

		while(trave->pointer!=NULL)
		{
			printf("%d",trave->value);
			trave=trave->pointer ;
		}
}


//DONE ..
