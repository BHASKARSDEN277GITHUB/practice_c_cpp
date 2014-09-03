//this code will arrange all one's to the end of array followed by zero's 

#include<stdio.h>

//main method to test the program
main() {
	int n ; //size of the input array
	
	//read input array size
	scanf("%d",&n);

	int array[n]; //input array 
	int i ; //iterator
	
	//read the input array
	for(i=0;i<n;i++) {
		scanf("%d",&array[i]);
	}

	int j ;//iterator
	i=-1;
	j=0;
	int temp ; //temporary variable for swapping

	//main logic here
	while(j<n) {
		if(array[j]==0) {
			i++;
			temp=array[j];
			array[j]=array[i];
			array[i]=temp;
			j++;
		} else {
			j++;
		}
	}

	//printing the resultant array
	for(i=0;i<n;i++) {
		printf("%d ",array[i]);
	}

	printf("\n");
}
