//operator overloading ..

#include<iostream>

using namespace std ;

class A
{
	public :
		int a , b ;
	public :
		//constructor ..
	
		A(int c , int d)
		{	
			a=c ;
			b=d ;
		}
		A operator* (A e)
		{
			A g = A(0,0) ;
			g.a = e.a+a ;
			g.b = e.b+b ;
			return g ;
		}
};


main()
{
	A a(1,2);
	A b(3,4);
	A c = A(0,0);
	c=a*b ;   //or a.operator+(b);
	cout<<c.a<<"lol"<<c.b ; 
	
}
