#include<stdio.h>
#include<malloc.h>
#define null (struct node *)(-1)
struct node {
	
	        int value; //data value here ..
		struct node *pointer; //pointer to next node ..
};

struct node *head=NULL ; //head of the linked list ..
struct node *end;
void insert(void); //utility function to insert value in the linked list ..
void print(void); //utility function to print the linked list ..
void quickSort(struct node **, struct node *); //to sort the linked list ..

main()
{
	end=(struct node *)malloc(sizeof(struct node ));
	printf("Enter elements to the linked list \n ");
	insert();
	
	//printing the list before sorting ..
	
//	print();
	
	//sorting the linked list ..
	
	quickSort(&head,end);
	
	//printing the list after sorting ..
	
	print();
}

void insert()
{
	
	int i=0 , j ;
	
	while(i<5)
	{
		scanf("%d",&j);
		struct node * cnode ;
		
		if(head==NULL)
		{
			cnode=(struct node *)malloc(sizeof(struct node));
			head=cnode ;
			cnode->value=j;
			cnode->pointer=end;
	
		}
		else
		{
			cnode->pointer=(struct node *)malloc(sizeof(struct node));
			cnode=cnode->pointer;
			cnode->value=j;
			cnode->pointer=end;

		}
		i++;
	}
	
	
}

void print()
{
	struct node * cnode=head;
	
	while(cnode!=end)
	{
		printf("%d\n",cnode->value);
		cnode=cnode->pointer;
	}
}

void quickSort(struct node **start,struct node *end1)
{
	int pivotvalue ;
	struct node * pivot=*start;
	pivotvalue=pivot->value;
	struct node *cnode=pivot->pointer;
	struct node *prev=pivot;
	struct node *temp;
	if(*start==end1)
	return ;
	
	else
	{
		while(cnode!=end1)
		{
			if(cnode->value<=pivotvalue)
			{
				temp=cnode->pointer;
				cnode->pointer=*start;
				prev->pointer=temp;
				*start=cnode;
				cnode=temp;
			}
			else
			{
				prev=cnode;
				cnode=cnode->pointer;
			}
		}
	}
		
		quickSort(start,pivot);
		quickSort(&pivot->pointer,end1);
}
				


