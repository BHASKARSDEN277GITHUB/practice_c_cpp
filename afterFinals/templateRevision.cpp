#include<iostream>
using namespace std ;

template <class mytemp>

class A {
	
		private :
		mytemp a ;
		public :
		A(mytemp a)
		{
			this->a=a ;
		}
		void print()
		{
			cout<<this->a<<endl ;
		}
};

main()
{
	A<int> obj=A<int>(3);
	obj.print();
}
