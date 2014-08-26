#include<iostream>
#include<malloc.h>
using namespace std ;

template <class T>
struct genBTree {
	T data ;
	struct genBTree<T> *leftPointer;
	struct genBTree<T> *rightPointer;
};

template <class T>
//method definitions
struct genBTree<T> * createNode(T data) {
	struct genBTree<T> *cnode=(struct genBTree<T> *)malloc(sizeof(struct genBTree<T>));
	cnode->data=data;
	cnode->leftPointer=NULL;
	cnode->rightPointer=NULL;
	return cnode;
}

template <class T>
void traverse(struct genBTree<T> *cnode){
	if(cnode==NULL)
	return ;
	else {
		traverse(cnode->leftPointer);
		cout<<cnode->data<<endl;
		traverse(cnode->rightPointer);
	}
}


//main method to test the program
main() {
	// for int data type
	{
	struct genBTree<int> *root;
	root=createNode(0); //creating root node
	root->leftPointer=createNode(1);
	root->rightPointer=createNode(2);
	traverse(root);
	//deallocating the memory
	free(root->leftPointer);
	free(root->rightPointer);
	free(root);
	}
	
	//for char data type
	struct genBTree<char> *root;
	root=createNode('a');
	root->leftPointer=createNode('b');
	root->rightPointer=createNode('c');
	traverse(root);
}
