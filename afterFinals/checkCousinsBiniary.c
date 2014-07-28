#include<stdio.h>
#include<malloc.h>

struct node {
		int data ;
		struct node *leftPointer ;
		struct node *rightPointer ;
};

struct node *root=NULL ;

void insert(void) ; //utility function to loop over insert new node to binary tree ..
void doInsert(struct node **,int) ; //utility function to actually insert element to binary tree ..
void findCousins(struct node *,int,int,int,int); //utility function to find if two nodes are cousins of each other .. (ie. they are on same level but different parent) ..

int p1,p2 ; //parents of node 1 and 2 respectively ..
int l1,l2 ; //levels of node 1 and 2 respectively ..

main() {

	//call insert() method ..
	insert();
	
	//read nodes you want to check if they are cousins ..
	int a,b; 
	printf("Enter two nodes you want to check as cousins : \n");
	
	scanf("%d%d",&a,&b);

	//call findCousins() method ..
	findCousins(root,0,-1,a,b); //-1 is said to be the parent of root node ..

	//check the parents and levels ..
	if(l1==l2 && p1==p2) {
		
		printf("%d and %d are COUSINS\n",a,b);
	} else {
		printf("%d and %d are not COUSINS\n",a,b);
	}
 
}

void insert() {

	int i ; //number of elements ..
	int n ;
	printf("Enter number of elements to be inserted :\n");
	scanf("%d",&i);
	
	while(i--) {

		scanf("%d",&n);
		doInsert(&root,n);
	}
}

void doInsert(struct node ** cnode , int data) {
	
	if(*cnode==NULL) {
	
		*cnode=(struct node *)malloc(sizeof(struct node));
		(*cnode)->data=data ;
		(*cnode)->leftPointer=NULL;
		(*cnode)->rightPointer=NULL;
	} else {
	
			if(data<=(*cnode)->data) {
	
				doInsert(&(*cnode)->leftPointer,data);
			} else {
			
				doInsert(&(*cnode)->rightPointer,data);
			}
	}
	
}
		

void findCousins(struct node * cnode,int level,int parent, int a, int b) {
	
	if(cnode!=NULL) {
		
		if(cnode->data==a) {
		
			l1=level ;
			p1=parent ;

		} else if(cnode->data==b) {
			
			l2=level ;
			p2=parent;

		} else {	
			
			findCousins(cnode->leftPointer,level+1,cnode->data,a,b);
			findCousins(cnode->rightPointer,level+1,cnode->data,a,b);		
			
		}
			
	} 
}
		
		
	

	
