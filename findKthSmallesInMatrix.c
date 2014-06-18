#include<stdio.h>
#define MAX  4
#define INFINITY 100
//create minheap of elements of first row . maintain row and column number for each element ..

struct heapNode{
		int value;
		int row ;
		int col ;
};

void buildHeap(struct heapNode *, int); //arguments pointer to heapNode array , number of nodes ..
void minHeapify(struct heapNode * , int , int); //arguments are pointer to heapNode array , index of current node , number of nodes ..
int findKthSmallest(struct heapNode * , int , int); //arguments are pointer to heapNode array , value of k , number of nodes ..


int matrix[MAX][MAX];
main()
{

	int i  , j ;
	int k ;

	struct heapNode  harray[MAX];

	printf("Enter the values of matrix : \n");
	
	//reading the input matrix ..

	for(i=0;i<MAX;i++)
	{
		for(j=0;j<MAX;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	
	printf("Enter the value of k : \n");
	scanf("%d",&k);
	
	//creating a heapArray ..
	
	for(i=0;i<MAX;i++)
	{
		harray[i].value = matrix[0][i];
		harray[i].row=0;
		harray[i].col=i;
	}
	
	//calling builheap function to build the heap ..

	buildHeap(harray,MAX);
	
	//calling the required task funciton ..
	
//	i=findkthSmallest(harray,k,MAX);
	
	printf("%d\n",i);
}

void buildHeap(struct heapNode *h,int n)
{
	int i = (n-1)/2;
	
	while(i<=0)
	{
		minHeapify(h,i,n);
	}
}

void minHeapify(struct heapNode *h,int i , int n)
{
	int l , r ;
	l=i*2+1;
	r=i*2+2;

	struct	heapNode hr ;
	int smallest ;
	int smallI=i;
	smallest =h[i].value;
	
	if(l<n && h[l].value<smallest)
	{
		smallI=l;
		smallest=h[l].value;
	}
	
	if(r<n &&h[r].value<smallest)
	{
		smallI=r;
		smallest=h[r].value;
	}
	
	hr=h[i];
	h[i]=h[smallI];
	h[smallI]=hr;

	minHeapify(h, smallI,n);
}


int findKthSmallest(struct heapNode * h , int k , int n)
{
	
	struct heapNode hr=h[0];
	int i =k ;
	int nextNode;
	while(i>0)
	{
		hr=h[0];
	
		nextNode=(h[0].row+1 < n-1 ) ? matrix[hr.row+1][hr.col] : INFINITY ;
		
		h[0].value=matrix[hr.row+1][hr.col];
		h[0].row=hr.row+1;
		h[0].col=hr.col;
	
		i--;
		minHeapify(h,0,n);
	}
	
	return h[0].value;
}

		
	
	
	


