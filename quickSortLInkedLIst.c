//quickquick on linked list . revision  ..

#include<stdio.h>
#include<malloc.h>
#define null (struct node *)(-1)
struct node {
	
		int value;
		struct node *pointer ;
};

struct node *head=NULL ;
struct node *end;

void insert(void); //to insert values to linked list ..
void print(void); //to print the elements of linked list ..

void quick(struct node **,struct node *); //quick quick implementation ..

main()
{

	printf("Enter elements to the linked list ..\n");
	end=(struct node *)malloc(sizeof(struct node));
	insert();
	//printting elements before quicking ..
	print();
	
	//applying quickquick on linked list ..
	
	quick(&head,end);
	printf("\n");
	//printing linked list after applying quickquick ..
	print();
}

void insert()
{
	struct node *cnode;
	int n , i ;
	printf("Enter number of elements you want to insert : \n");
	scanf("%d",&n);
	while(n>0)
	{
		scanf("%d",&i);
		if(head==NULL) //case 1 for first element ..
		{
			cnode=(struct node *)malloc(sizeof(struct node));
			head=cnode;
			cnode->value=i;
			cnode->pointer=end;
			
		}
		else
		{
			cnode->pointer=(struct node *)malloc(sizeof(struct node ));
			cnode=cnode->pointer;
			cnode->value=i;
			cnode->pointer=end;
			
		}
		n--;
	}
	
}
void print()
{
	struct node * cnode;
	cnode=head;
	while(cnode!=end)
	{
		printf("%d",cnode->value);
		cnode=cnode->pointer;
	}
	printf("\n");
}

void quick(struct node** start,struct node* end)
{
 
if(*start==end)
return;
//chosen first item as pivot//
struct node *pivot=(*start);
struct node *temp=(*start),*temp1;
while(temp->pointer!=end)
{
if(temp->pointer->value < pivot->value)
{
temp1=temp->pointer->pointer;
temp->pointer->pointer=*start;
*start=temp->pointer;
temp->pointer=temp1;

}
else
temp=temp->pointer;
}
quick(start,pivot);
quick(&(pivot->pointer),end);
}
	
