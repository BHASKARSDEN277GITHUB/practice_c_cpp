#include<iostream>

using namespace std ;

class A{

	private :
        static const	 int a=5 ;
        static int b ;
	int c ;

	public :

	A()
	{
		c=9;
	}
	static void prints()
	{

		b=89;
		cout<<a ;
		cout<<b;

		d();
	
	}
	void printc( int a) const
	{
		cout<<a ;
		cout<<b ;
		b=9 ;
		cout<<c;
	
		d();
	}
	
static	void d() 
	{
		}
};

int A::b=5;

main()
{
	A ob ;
	ob.prints();
	ob.printc(8);
}


