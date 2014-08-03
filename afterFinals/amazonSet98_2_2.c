#include<stdio.h>

//driver method to test the program 
main() {
	int n ;
	printf("Enter size of array :\n");
	scanf("%d",&n);
	int a[n];
	int i ; //iterator
	for(i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	
	int j=-1 ; //will be the index of negative numbers subarray 
	int temp;
	int l=-1;
	for(i=0;i<n;i++) {
		
		if(a[i]>=0) {
			l++;
			temp=a[l];
			a[l]=a[i];
			a[i]=temp;
		}
	}

	//printing the initial array 
        for(i=0;i<n;i++) {
                printf("%d | ",a[i]);
        }
        printf("\n");

	j=l+1;
	temp=0;

	//main logic here 
	for(i=0;i<n-1;i++) {

		if(i==0 || i==1 ) {

			if(i==0) {
				//do nothing 
			}
	
			if(i==1) {
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				j++;	
			}
	
		} else {
	
			if(i%2==0) { //index even .there should be a positive number at this position 
				//swap a[i] and a[j-1]
				temp=a[i];
				a[i]=a[j-1];
				a[j-1]=temp;
			} else {
				//swap a[i] and a[j-1]
				temp=a[i];
				a[i]=a[j-1];
				a[j-1]=temp;
	
				//swap a[i] and a[j]
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				j++;
			}

		}
	}

	//printing the resultant array 
	for(i=0;i<n;i++) {
		printf("%d | ",a[i]);
	}
	printf("\n");

}
