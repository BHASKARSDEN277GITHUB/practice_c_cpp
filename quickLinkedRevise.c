#include<stdio.h>
#include<malloc.h>

struct node {
	
		int data ;
		struct node * pointer;
};


struct node *head=NULL;

void insert(void); // utility function to insert elements to the linked list ..
void print(struct node *); //utility function to prit elements of the liked list ..
void quickSort(struct node **,struct node *); //utility function to perform quickSort on the linked list ..


main()
{
	//create the linked list ..

	insert();

	//print the list before sorting ..

	print(head);
	
	//perform quickSort ..

	quickSort(&head,NULL);

	//print the list after sorting ..
	
	print(head);
}


void insert()
{
	int i; // value of element to be inserted ..
	int n; // number of elements to be inserted ..
	
	printf("Enter number of elements to be inserted to the linked list : \n");
	scanf("%d",&n);
	

	struct node *cnode=head;

	while(n--)
	{
		scanf("%d",&i);
		
		if(cnode==NULL)
		{
			cnode=(struct node*)malloc(sizeof(struct node));
			cnode->data=i;
			cnode->pointer=NULL;
			head=cnode;
		}
		else
		{
			cnode->pointer=(struct node *)malloc(sizeof(struct node));
			cnode=cnode->pointer;
			cnode->data=i;
			cnode->pointer=NULL;
		}
	}
	
	printf("Elements inserted successfully \n");

}

void print(struct node *cnode)
{
	while(cnode!=NULL)
	{
		printf("%d",cnode->data);
		cnode=cnode->pointer;
	}
	
	printf("\n");
}


void quickSort(struct node ** start , struct node * last)
{
	
	
	if(*start!=last)
	{	
	struct node *pivot=*start ;
        struct node *temp=pivot;
	struct node *cnode=pivot->pointer ;
	int data = pivot->data;


	while(cnode!=last)
	{
		if(cnode->data < data)
		{
			temp->pointer=cnode->pointer;    //breaking cnode ..
			cnode->pointer=*start ;
			*start=cnode;
			cnode=temp->pointer;
		}
		else
		{
			temp=cnode;
			cnode=cnode->pointer;
		}
	}
	quickSort(start,pivot);
        quickSort(&(pivot->pointer),last);
	}
}
		
		





