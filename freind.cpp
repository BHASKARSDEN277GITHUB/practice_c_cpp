//freind functions ..

#include<iostream>

using namespace std ;

class A{
	

	private :
		int a ;
	public :
	
	A(int x)
	{
		this->a=x ;
	}
		
        void disp()
	{
		cout<<"hello";
		cout<<endl ;
	}
	
};

class B{
	
	public :
	final  int x ;
	void print(A obj)
	{
		cout<<obj.a;
		cout<<endl;
	}
};

main()
	
{
	A obj(5)  ;
	B obj1 ;
	obj1.print(obj);
}
