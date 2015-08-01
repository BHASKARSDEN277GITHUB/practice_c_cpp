#include<stdio.h>
#include<malloc.h>

struct node {

	int data ;
	struct node *pointer;
};

//variable declaration
struct node *head=NULL;

//method prototypes
void create(struct node **); //to create linked list
void reverseK(struct node*,int); //to reverse chunk of k nodes

//main method to test the program
main() {
	//call create method
	create(&head);
	//call reverseK
	int k;
	scanf("%d",&k);
	reverseK(head,k);
}

void create(struct node **cnode) {
	int  n=10;
	struct node *temp=*cnode;
	while(n--) {
		if(temp==NULL) {
			temp=(struct node *)malloc(sizeof(struct node));
			temp->data=n;
			temp->pointer=NULL;
			*cnode=temp;

		} else {
			temp->pointer=(struct node *)malloc(sizeof(struct node));
			temp=temp->pointer;
			temp->data=n;
			temp->pointer=NULL;
		}
	}
	temp=*cnode;
	while(temp!=NULL) {
		printf("%d ",temp->data);
		temp=temp->pointer;
	}
	printf("\n");
}

void reverseK(struct node *cnode,int k) {
	struct node *prev=cnode;
	struct node *temp=NULL;
	if(cnode!=NULL) {
		cnode=cnode->pointer;
	}

	prev->pointer=NULL;
	k--;
	while(k--) {
		temp=cnode->pointer;
		cnode->pointer=prev;
		prev=cnode;
		cnode=temp;
	}
	head->pointer=cnode;
	head=prev;

	//printing the list

	while(prev!=NULL) {
		printf("%d ",prev->data);
		prev=prev->pointer;
	}
	printf("\n");
}
