#include<stdio.h>

//driver function to test the program 

main() {
	
	printf("Enter Size of array : \n") ;
	int n ;
	scanf("%d",&n) ;
	printf("Enter elements of array : \n") ;
	int i ; //iterator 
	int array[n] ; //array positive and negative integers
	for(i=0;i<n;i++) {

		scanf("%d",&array[i]) ;
	}

	//printing the original array 

	for(i=0;i<n;i++) {

		printf("%d|",array[i]) ;
	}
	printf("\n") ;
	
	//calculate new array 

	int j ; //iterator 
	int temp ; //temporary variable 

	for(i=0;i<n;i++) {

		for(j=i+1;j<n;j++) {
			
			//for prositive negative combination 

			if(array[i]>=0 && array[j]<0) {

				//swap array[j] and array[i+1] 
				temp = array[i+1] ;
				array[i+1] = array[j] ;
				array[j]=temp ;
				break ;
			}
			//for negative positive combination 

			else if(array[i]<0 && array[j]>=0) {

				//swap array[j] and array[i+1] 
				temp = array[i+1] ;
				array[i+1] = array[j] ;
				array[j] = temp ;
				break ;
			}
			//for both with same sign 
			
			else {
	
				continue ;
			}

		}

	}


	//printing the new array ..
	
	for(i=0;i<n;i++) {

		printf("%d|",array[i]) ;
	}
	printf("\n") ;
}
