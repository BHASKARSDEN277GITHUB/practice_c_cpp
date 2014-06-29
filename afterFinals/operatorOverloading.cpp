#include<iostream>
using namespace std ;

class A
{
	private :
	int a ;
	int b ;
	
	public :
	
	A(int a , int b)
	{
		this->a=a ;
		this->b=b;
	}
	
	void operator *(A object)
	{
		cout<<(this->a*object.a)<<endl ;
	}
};


main()
{
	A obj=A(2,2);
	A obj1=A(3,3);
	
	obj.operator *(obj1);
}
