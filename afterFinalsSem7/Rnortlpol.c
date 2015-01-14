#include<stdio.h>
#include<malloc.h>

struct node {
	int value;
	struct node *left;
	struct node *right;
};

struct node *root=NULL;
//method prototypes
struct node * createNode(int);
int removeNodes(struct node *,struct node *,int,int,int); //arguments are current length and value of 'k'
void preorder(struct node *);

//main method to test the program
main() {
	int k;
	printf("Enter value of k\n");
	scanf("%d",&k);
	//creating binary tree
	root=createNode(1);
	root->left=createNode(2);
	root->right=createNode(3);
	root->left->left=createNode(4);
	root->left->left->left=createNode(7);
	root->left->right=createNode(5);
	root->right->right=createNode(6);
	root->right->right->left=createNode(8);
	
	//printing current tree with preorder
	preorder(root);
	printf("\n");
	//removing nodes
	int i;
	i=removeNodes(root,NULL,0,k,-1);

	//printing the preorder traversal of the tree
	preorder(root);
	
}

struct node * createNode(int value) {
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp->left=NULL;
	temp->right=NULL;
	temp->value=value;
	return temp;
}

void preorder(struct node *cnode) {
	if(cnode!=NULL) {
		printf("%d ",cnode->value);
		preorder(cnode->left);
		preorder(cnode->right);
	}
}

int removeNodes(struct node *cnode,struct node *prev,int len,int k,int id) {
	int l;
	int r;
	int count=len;
	if(cnode!=NULL) {
		len++;
		l=removeNodes(cnode->left,cnode,len,k,0);
		r=removeNodes(cnode->right,cnode,len,k,1);
		count=(l<r)?r:l;
		if(count<k) {
			free(cnode);
		//	cnode=NULL;
			if(id==0) {
				prev->left=NULL;
			} else if (id==1){
				prev->right=NULL;
			} else {//for id==-1
				root=NULL;
			}
		}

	}	

	return count;
}
