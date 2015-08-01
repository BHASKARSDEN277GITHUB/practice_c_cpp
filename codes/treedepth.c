#include<stdio.h>
#include<stdlib.h>

struct tree 
{
int data;
struct tree *left;
struct tree *right;
};

struct tree *newnode(int item)
{
struct tree *node = (struct  tree*)malloc(sizeof(struct tree));
node->data=item;
node->left=NULL;
node->right=NULL;
return node;
}
int findheight(struct tree *root)
{
struct tree *temp = root;
if(temp == NULL)
return 0;
else
{
int ldepth = findheight(temp->left);
int rdepth = findheight(temp->right);

if(ldepth > rdepth)
return (ldepth+1);
else return (rdepth+1);
}
}


int main()
{

struct tree *root = newnode(1);
root->left = newnode(2);
root->right = newnode(3);
root->left->left = newnode(4);
root->left->right = newnode(5);
printf("the height of tree is %d", findheight(root));
return 0;
}
