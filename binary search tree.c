#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void insert(int);
//void display(void);

static int total =0; 
struct bst{
       int data ;
       struct bst *left ;
       struct bst *right ;
       };
void check(struct bst *,int );  
struct bst * root =NULL;
struct bst * node ;
int main()
{
    printf("Enter your choice\n 1. to insert number 2. to check total number of elements in bst \n 3. to exit\n");
    
    int i ,choice;
    scanf("%d",&choice);
    while(choice !=3)
    {
                 switch(choice)
                 {
                               case 1:
                                      printf("Enter number to insert in binary search tree \n");
                                      scanf("%d",&i);
                                      insert(i);
                                      break ;
                               case 2:
                                      printf("Total elements are :  %d\n",total);
                                      break ;
                               default:
                                       printf("Enter correct choice\n");
                                       break ;
                 }
                 printf("Enter your choice\n 1. to insert number 2. to check total number of elements in bst \n 3. to exit\n");
                 scanf("%d",&choice);
    }
  
   // printf("Total elements in binary search tree are : %d",total);                 
    
 
   // getch();
    return 0 ;
}


void insert(int a)
{
     node=(struct bst *)malloc(sizeof(struct bst));
     
     if(root==NULL)
     {             root=node;
                   root->data=a;
                   root->left=NULL;
                   root->right=NULL;
                   total++;
                   
     }             
     else
     {
         check(root,a);   
     }
}

void check(struct bst * node1 , int value)
{
     if(value<=node1->data)
     {
                           if(node1->left==NULL)
                           {
                                               node1->left=(struct bst *)malloc(sizeof(struct bst));
                                               node1=node1->left;
                                               node1->data=value;
                                               total++;
                                               node1->left=NULL;
                                               node1->right=NULL;
                           }
                           else
                           check(node1->left,value);
     }
     else 
     {
         if(node1->right==NULL)
                           {
                                               node1->right=(struct bst *)malloc(sizeof(struct bst));
                                               node1=node1->right;
                                               node1->data=value;
                                               total++;
                                               node1->left=NULL;
                                               node1->right=NULL;
                           }
                           else
                           check(node1->right,value);
     }
}
