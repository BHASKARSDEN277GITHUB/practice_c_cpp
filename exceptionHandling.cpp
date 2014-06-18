#include<iostream>
using namespace std ;

class A {
	public :
	int a ;
	int b ;
	
	public :
	
	A(int a  , int b)
	{
		this->a=a;
		this->b=b;
	}
	
	
};
class Exception{};
main()
{
	A object  = A(1,2);
	try{
	if(object.a<object.b)
	throw  Exception();
	}
	catch(Exception)
	{
		cout<<"Exception Caught"<<endl;
	}

}


