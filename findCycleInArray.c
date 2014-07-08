#include<stdio.h>
#include<malloc.h>

struct hashnode {
			int data ;
			struct hashnode * pointer ;
};


struct hashnode *hashTable[10];
int findDuplicate(int); //to find the first duplicate . And cycle is found ;) .

main()
{
	int i ;//iterator ..

	//initialize all elements to NULL .. 
	for(i=0;i<10;i++)
	{
		hashTable[i]=NULL;
	}
	
	int n ;
	scanf("%d",&n);
	int array[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	
	// find first duplicate element ..
	
	
	int firstDup=0;
	for(i=0;i<n;i++)
	{
		//check if element already exists in hashTable . 
		// if yes, break . else enter value in hashTable ..
	
		int exists =0 ;
		exists=findDuplicate(array[i]);
		if(exists==1)
		{
			firstDup=i;
			break;
		}
	}
	
	//printing the cycle ..
	
	printf("Printing the FOUND CYCLE : \n");

	for(i=0;i<firstDup;i++)
	{
		printf("%d ",array[i]);
	}
}

int findDuplicate(int a)
{
	int index ; 
	index=a%9 ;

	struct hashnode *cnode =hashTable[index];
	struct hashnode *prev=cnode;

	if(hashTable[index]==NULL)
	{
		hashTable[index]=(struct hashnode *)malloc(sizeof(struct hashnode));
		hashTable[index]->data=a;
		hashTable[index]->pointer=NULL;
		return 0;
	}
	else
	{
		int status =0;
		while(cnode!=NULL)
		{
			if(cnode->data==a)
			{
				status=1;
				break;
			}
			else
			{
				prev=cnode;
				cnode=cnode->pointer;
			}
		}
		if(status==0)
		{
			prev->pointer=(struct hashnode *)malloc(sizeof(struct hashnode));
			cnode=prev->pointer;
			cnode->data=a;
			cnode->pointer=NULL;
			return status ;
		}
		else
		{
			return status ;
		}
	}
}
	


