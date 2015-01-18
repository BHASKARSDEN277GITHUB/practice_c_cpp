#include<stdio.h>

//method prototypes
void maxComSub(char *,char *,int,int); //arguments are first string , second string , length of first string , length of second string
int max(int,int);
main() {
	char str[]={'a','b','c','d','f'};
	char str1[]={'a','b','c','d','e'};
	maxComSub(str,str1,5,5);
}

void maxComSub(char *a,char *b,int l1,int l2) {
	int temp[l1+1][l2+1];
	int i;
	int j;

	//main logic here
	for(i=0;i<=l1;i++) {
		for(j=0;j<=l2;j++) {
			if(i==0||j==0) {
				temp[i][j]=0;
			} else if(a[i-1]==b[j-1]) {
				temp[i][j]=temp[i-1][j-1]+1;
			} else {
				temp[i][j]=max(temp[i][j-1],temp[i-1][j]);
			}
		}
	}
	
	printf("Max length subsequence is : %d\n",temp[l1][l2]);
}

int max(int a , int b) {
	return (a>b)?a:b;
}
