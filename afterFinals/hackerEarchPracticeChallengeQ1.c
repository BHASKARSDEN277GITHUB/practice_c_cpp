#include<stdio.h>

//driver method to test the program 

main() {

	int T ;//test cases
	scanf("%d",&T) ;

	int a[T] ;
	int i ;//iterator 

	for(i=0;i<T;i++) {

		scanf("%d",&a[i]) ;
	}

	i=0;
	int j ;//iterator

	while(i<T) {
		
		j=1;

		while(j<=a[i]) {

			if(j%3==0 && j%5==0) {

				printf("FizzBuzz\n");
				j++;

			} else if(j%3==0) {

				printf("Fizz\n");
				j++;
			
			} else if(j%5==0) {

				printf("Buzz\n");
				j++;
			
			} else {

				printf("%d\n",j);
				j++;

			}

		}
		
		i++;

	}

}
