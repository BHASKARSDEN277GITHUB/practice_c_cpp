#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct hash {
	int value;
	int index;
	struct hash *pointer;
};

//creating hashtable
struct hash * hashtable[10];
//method prototypes
void insert(int,int); //two arguments are value and index
int check(int,int,int);

main() {
	//initialize all the hashtable entries
	int i;
	for(i=0;i<10;i++) {
		hashtable[i]=NULL;
	}

	int array[10];
	int k;
	printf("Enter values of array\n");
	
	for(i=0;i<10;i++) {
		scanf("%d",&array[i]);
	}

	//get k
	printf("Enter value of K\n");
	scanf("%d",&k);

	//main logic here
	for(i=0;i<10;i++) {
		//check if entry already exists in table
		if(check(array[i],i,k)) {
			printf("True\n");
			exit(0);
		} else {
			//insert value in hashtable
			insert(array[i],i);
		}
	}
	printf("False\n");
}


void insert(int value,int index) {
	int hashIndex=value%9;
	struct hash *temp=NULL;
	if(hashtable[hashIndex]==NULL) {
		hashtable[hashIndex]=(struct hash *)malloc(sizeof(struct hash));
		temp=hashtable[hashIndex];
		temp->value=value;
		temp->index=index;
		temp->pointer=NULL;
	} else {
		temp=hashtable[hashIndex];
		while(temp->pointer!=NULL) {
			temp=temp->pointer;
		}

		temp->pointer=(struct hash *)malloc(sizeof(struct hash));
		temp->value=value;
		temp->index=index;
		temp->pointer=NULL;
	}
}

int check(int value,int index,int k) {
	struct hash *temp=NULL;
	int hashIndex=value%9;

	if(hashtable[hashIndex]==NULL) {
		insert(value,index);
		return 0;
	} else {
		temp=hashtable[hashIndex];
		if(temp->value==value) {
			if((index-temp->index )<=k) {
				return 1;
			}else {
				temp=temp->pointer;
			}
		} else {
			while(temp!=NULL) {
				if(temp->value==value) {
                        		if((index-temp->index )<=k) {
                                		return 1;
					} else {
						temp=temp->pointer;
					}
                 	        }
                	 }

		}

	}
	return 0;
}
	
