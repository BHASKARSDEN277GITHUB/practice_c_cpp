
// program to print node from root to leaf
#include<stdio.h>
#include<stdlib.h>
#define pathlen 1000
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

void printarray(int path[] , int a)
{
int i;
for(i=0;i<a;i++)
{
printf("%d \t",path[i]);
}                                                   
}
 //recursively goes to the left and right

void findrecursivepath(struct tree *node , int path[] , int pathl)                                          
{
if(node == NULL) return;
path[pathl] = node->data;
pathl++;
if(node->left == NULL && node->right== NULL)
{
printarray(path,pathl);
printf("\n");
}
else
{
findrecursivepath(node->left,path,pathl);
findrecursivepath(node->right,path,pathl);
}

}



void findpath(struct tree *node)
{
int path[1000];
findrecursivepath(node , path , 0);
}


int main()
{
struct tree *node = newnode(1);
node->left= newnode(2);
node->left->left = newnode(3);
node->left->right=newnode(4);
node->right=newnode(5);
findpath(node);
return 0;
}



