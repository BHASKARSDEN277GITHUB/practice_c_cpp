#include<stdio.h>

//method prototypes
void findSubstring(char *,int);

//main method to test the program
main() {
	char str[100];
	scanf("%s",str);
	int len=0;
	char *p=str;
	while(*p!='\0') {
		len++;
		p++;
	}
	
	//calling the required method
	findSubstring(str,len);
}

void findSubstring(char *str,int len) {
	//create a digit array from str array
	printf("length of string : %d\n",len);
	int dig[len];
	char *p=str;
	int *p1=dig;
	while(*p!='\0') {
		*p1=*p-'0';
		p++;
		p1++;
	}

	//creating preprocesses temp matrix
	int temp[len][len];
	int i;
	int j;
	int sum=0;

	for(i=0;i<len;i++) {
		for(j=0;j<len;j++) {
			if(j<i) {
				temp[i][j]=0;
				printf("%d  ",temp[i][j]);
			}else if(i==0) {
				sum=sum+dig[j];
				temp[i][j]=sum;
				printf("%d  ",temp[i][j]);
			} else {
				temp[i][j]=temp[0][j]-temp[0][i-1];
				printf("%d  ",temp[i][j]);
			}
		}
		printf("\n");
	} 

	//now find the max length substring such that sum of first half is same as second half
	int maxLen=0;
	int next;
	int start=-1,end=-1;
	for(i=0;i<len;i++) {
		for(j=i;j<len;j++) {
			if(j>i) {
				next=j+(j-i)+1;
				if(next<len) {
				if(temp[i][j]==temp[j+1][next]) {
					if((next-i+1)>maxLen) {
						maxLen=next-i+1;
						printf("%d %d %d\n",next,i,j);
						start=i;
						end=next;					
					}
				}
				}
			}
		}
	}

	
	printf("Max Length of substring is : %d\n",maxLen);
	if(start!=-1 && end !=-1) {
		printf("Substring is : ");
		for(i=start;i<=end;i++) {
			printf("%c",str[i]);
		}
	}
}

