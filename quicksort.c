#include<stdio.h>
int partition(int , int );
void quicksort(int , int );

int a[50];
int main(){
	printf("Enter size of array\n");
	int n ;
	scanf("%d",&n);
	printf("Enter the elements of array\n");
	int i ;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	quicksort(0,n-1);
	printf("The sorted array is : \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	
	return 0;
}

void quicksort(int c , int d)
{
	if(c<d){
	int q = partition(c ,d);
	quicksort(c,q-1);
	quicksort(q+1,d); }
}

int partition(int m, int b)
{
	int i , j ,temp ;
	i=m-1;
//	printf("%d\n",i);
	for(j=m ; j<b;j++)
	{
		if(a[j]<=a[b])
		{
			i++;
			temp = a[j];
			a[j]=a[i];
			a[i]=temp;
		}
	}
	
	temp = a[i+1];
	a[i+1]=a[b];
	a[b]=temp;
	
	return(i+1);
}
