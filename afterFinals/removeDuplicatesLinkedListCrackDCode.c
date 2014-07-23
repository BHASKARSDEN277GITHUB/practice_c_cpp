#include<stdio.h>
#include<malloc.h>

struct node {
		int data ;
		struct node * pointer ;
};

struct node * head=NULL; //head of the unsorted List ..
struct node * end=NULL; //end of the linked list ..

void insert(void); //utility function to insert the nodes to the linked list ..
void print(struct node *); //utility function to print the nodes of the linked list ..
void sort(struct node **,struct node *); //utility function to sort the linked list .. (Quick Sort) ..
void removeDuplicates(struct node *); //utility function to remove the duplicates from the linked list ..

//driver function to test the program ..
main()
{
	//calling the insert function ..
	insert();

	//printing the linked list before removing removing the duplicates ..
	printf("\nOriginal List\n");
	print(head);

	//sorting the linked list ..
	sort(&head,end);
	
	//printing  the linked list after sorting ..
	printf("\nOriginal List after Sorting\n");
	print(head);

	//calling the remove Duplicates function ..
	removeDuplicates(head);

	//calling the print function after removing the duplicates ..
	printf("\nList after removing the duplicates\n");
	print(head);
}

void insert()
{
	struct node * cnode;
	int data ;
	printf("Enter Number Of nodes you want to insert :\n");
	int n ;
	scanf("%d",&n);
	
	//inserting nodes now ..
	while(n--)
	{
		scanf("%d",&data);
		if(head==NULL)
		{
			head=(struct node *)malloc(sizeof(struct node));
			head->data=data;
			head->pointer=end;
			cnode=head;
		}
		else
		{		
			cnode->pointer=(struct node *)malloc(sizeof(struct node));
			cnode=cnode->pointer;
			cnode->data=data;
			cnode->pointer=end;
		}
	}
}

	
void sort(struct node **start, struct node *last)
{
	if(*start!=last)
	{
		struct node *cnode=(*start)->pointer;
		int pivotElem=(*start)->data;
		struct node *prev=*start;
		struct node *temp ;
		struct node *pivot=*start;

		while(cnode!=last)
		{
			if(cnode->data < pivotElem)
			{
				// do the task here ..
				temp=cnode->pointer;
				cnode->pointer=*start;
				*start=cnode;
				prev->pointer=temp;
				cnode=temp;
				
			}		
			else
			{	prev=cnode;
				cnode=cnode->pointer;
			}
		}
		
		sort(start,pivot);
		sort(&(pivot->pointer),last);
	}
}
	

void print(struct node *cnode)
{
	printf("\n");
	while(cnode!=end)
	{
		printf(" %d ",cnode->data);
		cnode=cnode->pointer;
	}
	printf("\n");
}

void removeDuplicates(struct node *cnode)
{
	struct node *prev=cnode;
	cnode=cnode->pointer;

	//main logic here ..
	while(cnode!=end)
	{
		if(cnode->data==prev->data)
		{
			prev->pointer=cnode->pointer;
			cnode=cnode->pointer;
		}
		else
		{
			prev=cnode;
			cnode=cnode->pointer;
		}
	}
}
	
