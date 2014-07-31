#include<stdio.h>

//method prototypes
void quickSort(int *,int,int) ;  //utility function to sort elements

//driver method to test the program
main() {

	int N ; //number of integers 
	scanf("%d",&N);
	int i=0 ;//iterator
	int num[N];

	while(i<N) {
		scanf("%d",&num[i]);
		i++;
	}
	
	printf("Enter number of queries\n");
	int q ; //number of queries 
	scanf("%d",&q);
	int a[q],b[q]; //2 arrays to store correspondin pair of numbers 
	i=0;

	while(i<q) {
		scanf("%d%d",&a[i],&b[i]);
		i++;
	}
	
	//sort the elements
	quickSort(num,0,N-1);
	
	i=0;

	while(i<q) {
		//get median's index 
		int temp=(b[i]-a[i]);
		int medianIndex;

		if(temp%2==0) {
			medianIndex=a[i]+temp/2 ;
		} else {
			medianIndex=a[i]+(temp-1)/2 ;
		}

		//print the median 
		printf("%d\n",num[medianIndex-1]);
		i++; //update the iterator 
	}

}

void quickSort(int *a,int start , int end) {
	
	int pivot=a[end];
	if(start<end) {
		int i=start-1;
		int j=start;
		int temp ;

		while(j<end) {
			if(a[j]<=pivot) {
				i++;
				temp=a[i];
				a[i]=a[j];
				a[j]=temp ;
				j++;
			} else {
				j++;
			}
		}
		i++;
		temp=a[i];
		a[i]=a[end];
		a[end]=temp;
		
		//recursion here 
		quickSort(a,start,i-1);
		quickSort(a,i+1,end);
	}
}
