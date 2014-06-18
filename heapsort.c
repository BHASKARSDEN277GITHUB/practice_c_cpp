#include<stdio.h>
#include<math.h>
void createheap(int);
void maxheapify(int);
void heapsort(void);
static int a[50] ;
static int n ;

int main(){
	int i ;
	printf("Enter size of array \n");
	scanf("%d",&n);
	int n_copy = n;
	printf("Enter elements of array\n");

	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}

	i=(int)n/2;
	
	createheap(i);
	//printf("test check test check\n");

	heapsort();

	printf("The sorted array is : \n");
	for(i=1;i<=n_copy;i++)
	{
		printf("%d\n",a[i]);
	}


	return 0;
}
void createheap(int index)
{	printf("%d",index);
	int b ;	
	while(index>0)
	{
		maxheapify(index);
		index--;
	}
	/*for( b =1;b<=n;b++)
	{
		printf("aaaaaaaaa%d\n",a[b]);
	}*/
}
void maxheapify(int index1)
{
	int left=0 ;
	int right=0;
	int temp=0 ;
	int largest =-1 ;

	if(2*index1 <= n)
	{
	 	left = 2*index1;
		if(a[left]>a[index1])
		{
			
			largest = left;
		}
		else
		{
			largest = index1;
		}
	}
	if((2*index1 +1) <=n) 
	{
		int right = 2*index1 + 1;
		if(a[right]>a[largest])
		{
			largest = right ;
		}
	}
	if(largest !=index1)
	{
		temp = a[largest];
		a[largest]=a[index1];
		a[index1]=temp;
		maxheapify(largest);
	}
	
	
}

void heapsort(void)
{
	int temp = 0;
	int i =n;
	while(i>1)
	{
		temp = a[i];
		a[i]=a[1];
		a[1]=temp;
		i--;
		n--;
	maxheapify(1);
	}
}

	
	

