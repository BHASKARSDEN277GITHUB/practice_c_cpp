//virtual constructor ...(?)

#include<iostream>

using namespace std ;

class abc {
	
	public :
virtual	abc(){};  //compiler gives error here .. constructors can not be declared virtual ..
	};
class a :public abc
{
	public:
	a(){};
};


main()
{
	abc *ptr =new a;
	cout<<"Fuck YOu !"<<endl;
}
