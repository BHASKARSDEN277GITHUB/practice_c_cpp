#include<stdio.h>
#include<malloc.h>

struct node {
		int data ;
		struct node *leftPointer;
		struct node *rightPointer;
};

struct node *root=NULL;
int Max=0 ; // initiating the max sum to  zero initially ..
int *Path; //pointer to Max Path Sum pathArray ..

void insert(void); // it runs a loop for entering elements to the binary tree ..
void insertActual(struct node **,int); // it goes into the binary tree recursively to enter elements in correct position ..
void findMaxSum(struct node *,int,int *,int); //the second argument is the sum till yet  and the third argument is the path till yet and fourth is number of nodes visited till yet (ie. current index of path int array)..

//driver program to test the program ..
main()
{
	int path[20]; //we can allocate memory to this int array dynamically in insert() also . lets keep it simple for now ..
	int *p=path;

	//calling the insert function ..
	insert(); 

	//calling the findmaxSum function ..
	findMaxSum(root,0,p,0) ;  //initially the sum till yet is zero ..
	
	//printing the max path sum value ..
	printf("Max root->leaf Path Sum is : %d\n",Max);
	
	//printing the max sum Path ..
	while(*Path!=-1)
	{
		printf("%d",*(Path++));
		if(*Path!=-1)
		printf("->");
	}
	printf("\n");
	
}

void insert()
{
	int n ; //total number of elements to be inserted in binary tre ..
	int i ; // stores the value to be inserted in each element ..
	
	//allcate memory to max path array ..
	Path=(int *)malloc(sizeof(int)*n);
	
	printf("Enter the total number of elements you want to insert : \n");
	scanf("%d",&n);
	printf("Enter the elements now\n");

	//run a loop to enter the elements ..
	while(n--)
	{
		scanf("%d",&i);
		insertActual(&root,i);
	}
}

void insertActual(struct node ** cnode,int data)
{
	if(*cnode==NULL)
	{
		*cnode=(struct node*)malloc(sizeof(struct node));
		(*cnode)->data=data;
		(*cnode)->leftPointer=NULL;
		(*cnode)->rightPointer=NULL;
	}
	else
	{
		if(data<=(*cnode)->data)
		{
			//call this function recursively passing the left child and data value as arguments ..
			insertActual(&(*cnode)->leftPointer,data);
		}
		else
		{
			insertActual(&(*cnode)->rightPointer,data);
		}
	}
}
	

void findMaxSum(struct node *cnode,int sumTY,int *p,int index)
{
	 //check if it is leaf node ..
	if(cnode->leftPointer==NULL&&cnode->rightPointer==NULL)
	{
		int i; //iterator ..

		//update path array ..
		p[index]=cnode->data;


		//update Max if sumTY is greater than it ..
		Max=(Max>sumTY)?Max:sumTY;
		
		//update path array if Max=sumTY..
		if(Max==sumTY)
		{
			//copy the curret path to the max path array ..
			for(i=0;i<=index;i++)
			{
				Path[i]=p[i];
			}
			//add terminator char to path ..
			Path[i]=-1;
		}
		
	}
	else
	{
		//increase sumTY,add current node to array  and call function on left child and right child ..
		sumTY++;
		p[index]=cnode->data ;
		index++;
	
		

		if(cnode->leftPointer!=NULL)
		findMaxSum(cnode->leftPointer,sumTY,p,index);
		
		if(cnode->rightPointer!=NULL)
		findMaxSum(cnode->rightPointer,sumTY,p,index);
	}
}
		
	
