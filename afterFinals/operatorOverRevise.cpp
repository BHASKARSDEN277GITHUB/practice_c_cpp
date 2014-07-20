#include<iostream>

using namespace std ;

class A {
	
	public :
	int a ;
	int b ;

	public :
	A(int a , int b)
	{
		this->a=a;
		this->b=b;
	}
	
	A operator+(A d)
	{	A obj=A(0,0);
		obj.a=this->a+d.a;
		obj.b=this->b+d.b;
		return obj;
	}
};

main()
{
	A object1=A(1,1);
	A object2=A(2,2);
	A object3=object1+object2;
	cout<<object3.a<<endl<<object3.b<<endl ;
}

