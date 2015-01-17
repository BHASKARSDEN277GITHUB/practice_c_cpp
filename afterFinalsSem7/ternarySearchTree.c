#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct tstNode{
	char data ;
	struct tstNode * left;
	struct tstNode * right;
	struct tstNode * equal;
	int terminator;
};
void insert(struct tstNode **,char *);
void search(struct tstNode *,char *);

//main method to test the program
main() {
	struct tstNode *root=NULL;
	//character array to read input string
	char str[100];
	
	//read total number of strings
	int n ;
	printf("Enter total number of words you want to insert\n");
	scanf("%d",&n);
	
	//insert words into the Ternary Search Tree
	while(n--) {
		scanf("%s",str);
		insert(&root,str);	
	}
	
	//search the words
	printf("Enter number of testcases\n");
	int t; 
	scanf("%d",&t);
	
	while(t--) {
		scanf("%s",str);
		search(root,str);
	}

	//end of main

}

void insert(struct tstNode **cnode,char *str) {
	if(*cnode==NULL) {
		printf("%c	inserted\n",*str);
		//allocate memory
		*cnode=(struct tstNode *)malloc(sizeof(struct tstNode));
		(*cnode)->data=*str;	
		(*cnode)->terminator=0;
		(*cnode)->left=(*cnode)->right=(*cnode)->equal=NULL;

	}
	if((*cnode)->data==*str) { //equal pointer to next node
		if(*(str+1)!='\0') {
			insert(&(*cnode)->equal,str+1);
		}else {
			(*cnode)->terminator=1;
		}
	} else if(*str<(*cnode)->data) {
		insert(&(*cnode)->left,str);
	} else {
		insert(&(*cnode)->right,str);
	}
}

void search(struct tstNode *cnode,char *str) {
	if(*str==cnode->data) {
		if(cnode->terminator==1 && *(str+1)=='\0') {
			printf("word found\n");
			return ;
		}else if(cnode->terminator==0 && *(str+1)=='\0'){
			printf("word not found\n");
			return ;
		}
		if(cnode->equal!=NULL) {
			search(cnode->equal,str+1);
		}else {
			printf("word not found\n");
			return ;
		}

	}else if(*str<cnode->data){
		if(cnode->left!=NULL) {
			search(cnode->left,str);
		}else {
			printf("word not found\n");
			return ;
		}
	}else {
		if(cnode->right!=NULL) {
			search(cnode->right,str);
		}else {
			printf("word not found\n");
		}
	}
}

