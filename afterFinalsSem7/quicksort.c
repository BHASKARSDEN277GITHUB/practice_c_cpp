#include<stdio.h>
void quicksort(int *,int,int); // three arguments are  integer array , firstIndex, last Index ( start and end )

//main method to test the program
main() {
	int array[10];
	int i;
	printf("Enter elements \n");
	for(i=0;i<10;i++) {
		scanf("%d",&array[i]);
	}
	//display elements before sorting
	for(i=0;i<10;i++) {
		printf("%d  ",array[i]);
	}
	printf("\n");
	//call quicksort 
	quicksort(array,0,9);
	
	//display elements after sorting
	for(i=0;i<10;i++) {
		printf("%d ",array[i]);
	}
	printf("\n");
}

void quicksort(int * array,int start,int end) {

	if(start<end) {
		int i=start-1;
		int j=start;
		int temp;
		int pivot=array[end];
		while(j<end) {
			if(array[j]<=pivot) {
				i++;
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
				j++;
			} else {
				j++;
			}
		}

		//swap array[++i] and array[end]
		temp=array[end];
		array[end]=array[i+1];
		array[i+1]=temp;

		//call quicksort recursively
		quicksort(array,0,i);
		quicksort(array,i+1,end);
	}
}
