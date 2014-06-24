#include<iostream>

using namespace std ;

class base
{
	public :
        virtual	 void show(void)=0 ; // making it a pure virtual fuction .. This means this class base is now abstract .. It can never be instanciated ..
		~base(){};
};

class intG : public base 
{
	public :
	intG(){};
	void show()
	{
		cout<<"2"<<endl ;
	}

	~intG(){cout<<"intG deleted .."<<endl;}
	
};

class charG : public base
{
	public :
	charG(){};
	void show()
	{
		cout<<"a"<<endl ;
	}
	~charG(){cout<<"charG deleted .."<<endl;}
};

main()
{
	base * ptr = new intG();
	ptr->show();
	delete ptr ;




	
}
