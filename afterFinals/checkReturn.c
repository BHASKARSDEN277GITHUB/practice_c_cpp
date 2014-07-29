//gives no error even if method does not return something which is required to return something 

#include<stdio.h>

//method prototypes

int checkReturn();

//driver method to test program 

main() {

	int a = checkReturn();
	printf("%d\n",a);

}

int checkReturn() {

	//return nothing 

}


