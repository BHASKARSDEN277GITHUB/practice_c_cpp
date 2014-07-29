#include<stdio.h>

void reverse(char *) ; //utility function to reverse string 

main() {

	char str[10] ;
	scanf("%s",str);
	reverse(str);
	printf("%s\n",str);
}

void reverse(char *str) {
	
	int size=strlen(str);
	int i=0;
	int j=size-1;
	char *temp;
	while(i<j) {
	
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}
}

