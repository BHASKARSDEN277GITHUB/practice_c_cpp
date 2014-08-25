//test code to print pascal's triangle

#include<stdio.h>

//driver method to test the program
main(int argv, char **argc) { //pass the value of n as commandline argument , make the value of n be , 1<=n<=9 ;)
	int n=*argc[1]-'0';
	int a[n];
	int i,j; //iterators
	
	//for row '0' do it manually
	printf("1\n");
	a[0]=1;
	a[1]=1;
	
	//for the rest of the rows	
	for(i=1;i<n;i++) { //i means number(nth) row
		for(j=0;j<=i;j++) {
			int temp;
			int previous;
			if(j==0) {
				previous=a[0];
				printf("%d",a[j]);
			} else {
				temp=a[j];
				printf(" %d",temp);
				a[j]=a[j]+previous;
				previous=temp;
			}
		}
		a[j]=1;
		printf("\n"); //line break
	}
}
