//code to get random 2 digit number from an integer
#include<stdio.h>

//main method to test the program
main() {
	int n ;//input integer

	//reading input
	scanf("%d",&n);
	
	int i ;//iterator
	int totalDigits=0;
	int temp=n;

	while(temp) {
		temp=temp/10;
		totalDigits++;
	}
	
	int array[totalDigits]; //array to store digits
	
	temp=n;
	i=0;
	while(temp) {
		array[i]=temp%10;
		temp=temp/10;
		i++;
	}
	
	//get two random indices from array
	int aIndex;
	int bIndex;
	
	aIndex=rand()%totalDigits;
	
	bIndex=rand()%totalDigits;
	
	while(bIndex==aIndex) { //making sure a and b are different digits
		bIndex=rand()%totalDigits;
	}
	
	int a,b; //two digits
	a=array[aIndex];
	b=array[bIndex];


	int newNum=a*10+b;
	
	printf("%d\n",newNum);
}
