// program to print level order traversal
#include<stdio.h>
#include<stdlib.h>
struct tree *newnode(int item);
void levelorder(struct tree* root);
int findheight(struct tree * root);
void printlevel(struct tree * root , int level);

struct tree{
int data;
struct tree *left;
struct tree *right;
};

void printlevel(struct tree *root , int level)
{
if(root== NULL)
return;

if(level==1)
printf("%d \t",root->data);
else if(level>1)
{
printlevel(root->left , level-1);
printlevel(root->right , level-1);
}
}

void levelorder(struct tree * root)
{
 int h =  findheight(root);
int i;
for(i=1;i<=h;i++)
{
printlevel(root , i);
printf("\n");
}

}

int max(int a , int b)
{
if(a>b)
return a;
else 
return b;
}

int findheight(struct tree *root)
{
if(root==NULL)
return 0;
else 
{
int l = findheight(root->left);
int r = findheight(root->right);
return (max(l,r) +1);
}
}


struct tree *newnode(int item)
{
struct tree * node = (struct tree *)malloc(sizeof(struct tree));
node->data=item;
node->left=NULL;
node->right=NULL;
return node;
}

int main()
{
struct tree *node = newnode(1);
node->left= newnode(2);
node->left->left = newnode(3);
node->left->right=newnode(4);
node->right=newnode(5);
levelorder(node);
return 0;
}

