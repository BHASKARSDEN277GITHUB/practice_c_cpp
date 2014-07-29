#include<stdio.h>

//method prototypes

void pushOperand(int); //utility function to push operands to the stack 
void pushOperator(char); //utility function to push operator to the stack
int popOperand(); //utility function to pop operand out of stack
char popOperator(); //utility function to pop operator out of stack
void calculate(); //utility function to calculate the str result 
int topOperator=-1;
int topOperand=-1;

//global variables

int stackOperand[20];
char stackOperator[20];

//driver method to test the program

main() {

	char str[20];
	printf("Enter String (with digits and operators)\n");
	scanf("%s",str);
	
	//create stacks of digits and operators 

	char *exp=str;
	int a ;
	int b ;
	char cOp ;
	while(*exp!='\0') {
	
		if(*exp=='0' || *exp=='1' || *exp=='2' || *exp=='3' || *exp=='4' || *exp=='5' || *exp=='6' || *exp=='7' || *exp=='8' || *exp=='9') {

			pushOperand(*exp-'0');
			exp++;

		} else if(*exp=='+' || *exp=='-') {
		
			pushOperator(*exp);
			exp++;
		
		} else if(*exp=='*' || *exp=='/') {
			
			cOp=*exp;
			a=popOperand();
			exp++;
			b=*exp-'0';
			if(cOp=='*') {
				
				a=a*b;
	
			} else {

				a=a/b;

			}
			pushOperand(a);
			exp++;

		} else {

			printf("Invalid String\n");
			return;

		}

	}

	calculate();

//	printf("%d %d \n",topOperand,topOperator);

}


void calculate() {
	
	int a ;
	char cOp ; //current operator 
	char nOp ; //next operator 
	int result = popOperand();
	printf("%d %d \n",topOperand,topOperator);


	while(topOperand>=0) {

		a=popOperand();
		cOp=popOperator();
		
		printf("%c,%c\n",cOp,nOp);	
	
		if(topOperator>=0) {

			nOp=popOperator();

		} else {

			nOp='+';
		}
		
		printf("%c,%c\n",cOp,nOp);
	
		if(cOp=='+'&& nOp=='+') {

			result=result+a;
			printf("%d,%c,%c\n",result,cOp,nOp);
			pushOperator('+');

		} else if(cOp=='+' && nOp=='-') {

			result=result-a;
			pushOperator('+'); // as '-' has already been taken 
			printf("%d,%c,%c\n",result,cOp,nOp);
	
		} else if(cOp=='-' && nOp=='+') {

			result=-result+a;
			pushOperator('+');
			printf("%d,%c,%c\n",result,cOp,nOp);

		} else {

			result=-result-a;
			pushOperator('+'); //as '-' has already been taken 
			printf("%d,%c,%c\n",result,cOp,nOp);

		}

	}

	printf("%d\n",result); 

}


void pushOperand(int a) {

	if(topOperand<19) {
	
		topOperand++;
		stackOperand[topOperand]=a;
	
	} else {

		printf("error : memeory overflow\n");

	}

}

int popOperand() {

	if(topOperand>=0) {

		topOperand--;
		return stackOperand[topOperand+1];
	
	} else {

		printf("Empty stackOperand\n");
		return -1;
	
	}

}

void pushOperator(char a) {

	if(topOperator<20) {

		topOperator++;
		stackOperator[topOperator]=a;

	} else {

		printf("error : memory overflow\n");
	}

}

char popOperator() {

	if(topOperator>=0) {

		topOperator--;
		return stackOperator[topOperator+1];

	} else {

		printf("Empty stackOperator\n");
		return '0';

	}

}


