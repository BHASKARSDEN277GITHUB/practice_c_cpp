#include<stdio.h>
#include<stdlib.h>
#define bool int
struct tree *newnode(int item);
int roottoleaf(struct tree * node , int sum);
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

int roottoleafsum(struct tree *node, int sum)
{
bool ans =0;
if(node == NULL)
return (sum==0);

else
{
int subsum = sum - node->data;

if( subsum == 0 && node->left == NULL &&  node->right == NULL)
return 1;
if(node->left)
ans = ans || roottoleafsum(node->left ,subsum);
if(node->right)
ans = ans || roottoleafsum(node->right,subsum);
return ans;
}

}



int main()
{

int sum = 6;
struct tree *node = newnode(1);
node->left= newnode(2);
node->left->left = newnode(3);
node->left->right=newnode(4);
node->right=newnode(5);
 if(roottoleafsum(node , sum))
printf("property satisfied");
else
printf("not satisfied");
return 0;
}

