//hashing using linkedLIst ..

#include<iostream>
#include<malloc.h>

using namespace std;

struct node{
		int value;
		struct node *pointer;
};

struct node * hashTable[10]; //array of linked list node pointers ..
const int size=9;
int search(int); //to search in hash table .. returns 1 if already exists or -1 if not ..
int add(int) ; //function to insert in hash table if not exists ..

int main()
{
	int array[10];
	int n=10 ;
	printf("Enter elements in array \n");
	while(n>0)
	{
		scanf("%d",&array[10-n]);
		n--;
	}
	
	//elements entered successfully ..
	n=0;

	//initializig hash table ..
	
	while(n<10)
	{
		hashTable[n]=NULL;
		
		n++;
	}
	n=0;
	int flag =0;
	printf("Repeating ints are : \n");
	while(n<10)
	{
		flag=	search(array[n]); //searching each array value ...
		if(flag==1)
		{
			//1 means there is entry corresponding to this value in hashtable ..
			printf("%d\n",array[n]);
		}
		
		n++;
	}
}

int search(int val)
{

	int key ;
	int flag =-1;
	key=val%9;
	struct node *cnode,*prev;
	cnode=hashTable[key];
	if(hashTable[key]==NULL)
	{
		cnode=(struct node *)malloc(sizeof(struct node));
		cnode->value=val;
		cnode->pointer=NULL;
		hashTable[key]=cnode;
	}
	else
	{
		while(cnode!=NULL)
		{
		if(cnode->value==val)
		{flag=1; return 1; }
		else
		{
			prev=cnode;
			cnode=cnode->pointer;
		}
		}
		if(flag==-1)
		{
			cnode=(struct node *)malloc(sizeof(struct node *));
			prev->pointer=cnode;
			cnode->value=val;
			cnode->pointer=NULL;
			return flag;
		}
			
	}
}
