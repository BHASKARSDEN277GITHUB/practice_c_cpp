#include<iostream>
using namespace std ;

class A {
	
	public :
	int a ;
	int b ;
	protected :
	int c ;
	
	friend class B;
};
class C
{
	
};
class B  : public A , public C
{
	public :
	int a ;
	int b;
	
	};

main()
{}
