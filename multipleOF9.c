//using bitwise operators ..

#include<stdio.h>
//functions prototype here ..
typedef enum bool bool;
enum bool{true,false}; //creating an enumerated datatype to check false is given function evaluates to true or false values ..
 bool flag =false;

 bool isDivisibleBy9(int); // an utility function to check divisibility by 9 ..

//main function here ..
main()
{
	int n ;
	printf("Enter NUmber : \n");
	scanf("%d",&n);
	
        flag=isDivisibleBy9(n);
	
	if(flag==true)
	{
		printf("No is divisible by 9 \n");
	}
	
	else
	{
		printf("Number is not divisible by 9 \n");
	}
}

 bool isDivisibleBy9(int n)
{
	if(n==0 || n==9)
	return true ;
	
	if(n<9)
	return false;
	
	return isDivisibleBy9((int)(n>>3) - (int)(n&7)); // n/9 can be written as n/8-n/72 .. lol ..
}
