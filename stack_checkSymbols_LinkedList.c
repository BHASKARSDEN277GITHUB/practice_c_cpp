#include<stdio.h>
#include<malloc.h>

struct stackNode{
			char data ;
			struct stackNode *pointer;
	};

struct statkcNode * top =NULL;

void push(char,struct stackNode *);  //to push element to stack ..
char pop(struct stackNode *);//to pop element from  stack ..
struct stackNode *  createStack();

main()
{
	char exp[20]; //character array to store the input expression ..
	gets(exp);
	char *c =exp;
	char check=' '
	char comp;
	char prev=' ';
	while(*c !='\0')
	{
		if((*c=='('||*c=='{'||*c=='['))
		{
			if((check=='('||check=='{'||check=='[')
			{
				push(*c);
				prev=*c;
				c++;
				
				check=prev;
			}
			else
			{
				comp=pop();
				if(comp!=*c)
				{
					printf("INCORRECT EXPRESSION . SYMBOLS ARE NOT BALANCED \n");
					return ;
				}
				prev=*c;
				c++;
			}
		}
		else 
		{
			prev=*c;
			c++;
			check=prev;
		}
	}
}
	
void createStack()
{
	struct stackNode * S=(struct stackNode *)malloc(struct stackNode));
	
	
	
void push(char c,struct stackNode *S)
{
	
