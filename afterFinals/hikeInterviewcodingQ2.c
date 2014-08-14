#include<stdio.h>

//methods prototypes here

int getFirstDigit(char *,int); //utility function to get the position of first digit wrong in the order 
int getSecondDigit(char*,int,int);//utility function to get the position of second digit 
void quickSort(char *,int,int);//utility function to sort the character array

//main method to test the program
main() {
	char str[20];  //character array to hold the number max size : 20
	gets(str);
	int length=strlen(str);
	
	//check if required number exists or not 
	int firstPosition=getFirstDigit(str,length);
	int secondPosition;

	if(firstPosition!=-1) {
		secondPosition=getSecondDigit(str,firstPosition,length);
		// swap digits at these two positions 
		char temp=str[firstPosition];
		str[firstPosition]=str[secondPosition];
		str[secondPosition]=temp;

		//sort the string after the firstchar position
		quickSort(str,firstPosition+1,length-1);
		
		//priting the required number
		printf("Required  number is : %s\n",str);
	} else {
		printf("No number greater than this exists\n");
	}
}

int getFirstDigit(char *str,int length) {
	int i=length-2;
	while(i>=0) {
		if(str[i]<str[i+1]) {
			return i;
		}
		i--;
	}
	if(i==-1) {
		return i;
	}
}

int getSecondDigit(char *str,int firstPos,int length) {
	int sP=firstPos+1;
	int i=firstPos+2;
	
	while(i<length) {
		if(str[i]>str[firstPos] && str[i]<str[firstPos+1]) {
			sP=i;
		}
		i++;
	}
	return sP;
}

void quickSort(char *str,int start,int end) {
	if(start<end) {
		char pivot=str[end];
		int i=start-1;
		int j=start;
		char temp;
	
		while(j<end) {
			if(str[j]<pivot) {
				i++;
				temp=str[i];
				str[i]=str[j];
				str[j]=temp;
				j++;
			}
			else {
				j++;
			}
		}

		//swap str[i+1] , str[end] 
		temp=str[i+1];
		str[i+1]=str[end];
		str[end]=temp;

		//quicksort recursion here 
		quickSort(str,start,i);
		quickSort(str,i+2,end);
	}
}
