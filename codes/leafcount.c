// program to count the leaf nodes 
#include<stdio.h>
#include<stdlib.h>
struct tree *newnode(int item);

struct tree{
int data;
struct tree *left;
struct tree *right;
};


struct tree *newnode(int item)
{
struct tree * node = (struct tree *)malloc(sizeof(struct tree));
node->data=item;
node->left=NULL;
node->right=NULL;
return node;
}


int leafcount(struct tree *root)
{
if(root==NULL)
return 0;
if(root->left  == NULL && root->right == NULL) //if left and right child are null then it is a leaf node and ir returns 1 
return 1;
return (leafcount(root->left) + leafcount(root->right));
}


int main()
{
struct tree *node = newnode(1);
node->left= newnode(2);
node->left->left = newnode(3);
node->left->right=newnode(4);
node->right=newnode(5);
int a = leafcount(node);
printf("the leaf count is %d", a);
return 0;
}

