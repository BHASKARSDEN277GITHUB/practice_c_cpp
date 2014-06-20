#include<stdio.h>
#define null (node*)(-1)
typedef struct node node;
struct node
{
node *next;
int value;
};
node *pre=NULL;
node* new_node(int value,node* next)
{
node* newn;
newn=(node*)malloc(sizeof(node));
newn->value=value;
newn->next=next;
return newn;
}
// function for quick_sort of linked list//
void sort(struct node **start , struct node *en)
{
	
	struct node *pivot=*start;
	int pValue=pivot->value;
	struct node *cnode=pivot;
	struct node * temp , *prev=cnode;
	cnode=cnode->next;
	struct node *endd=en;
	
	if(*start==en)
	{
		return;
	}
	while(cnode->next!=endd)
	{
		if(cnode->value<pValue)
		{
			temp=cnode;
			cnode->next=*start;
			*start=cnode;
			prev->next=temp->next;
			cnode=temp->next;
//			printf("fucked\n");
			
		}
		else
		{
			prev=cnode;
			cnode=cnode->next;
		}	
//		printf("fucked\n");
	}
	
//	printf("fucked\n");
	sort(start,pivot);
	sort(&(pivot->next),en);
	


}
 
// mainfunction for test//
int main()
{
node *head;
node *a[11];
a[5]=new_node(0,null);
a[4]=new_node(5,a[5]);
a[3]=new_node(1,a[4]);
a[2]=new_node(3,a[3]);
a[1]=new_node(2,a[2]);
head=a[1];
sort(&head,null);
while(head!=null)
{
printf("%d ",head->value);
head=head->next;
}
}
