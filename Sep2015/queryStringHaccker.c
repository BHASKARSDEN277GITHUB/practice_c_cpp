#include<stdio.h>

//method prototypes
int checkExistent(char *,char *); //returns 1 if anagram of query string exists as substring in main string

main(){
	char main[100];
	char query[100];
	
	int T; //number of test cases

	printf("Enter number of Test Cases\n");
	scanf("%d",&T);

	printf("Enter main String\n");
	scanf("%s",main);
	
	while(T--){
		printf("Enter Query String\n");
		scanf("%s",query);
		if(checkExistence(main,query)){
			printf("Exists\n");
		}else{
			printf("Does not Exist\n");
		}
	}
}

//method definitions
int checkExistence(char *main,char *query){
	
	int hashTable[256];
        int iter;
        for(iter=0;iter<256;iter++){
                hashTable[iter]=0;
        } 

	char *s=main;
	while(*s!='\0'){
		hashTable[*s]++;
		s++;
	}
		
	int flag=1;
	//now check if anagram exists or not
	s=query;
	while(*s!='\0'){
		hashTable[*s]--;
		if(hashTable[*s]>=0){
			s++;
			continue;
		}else{
			flag=0;
			break;
		}
	}
		
	return flag;
}
