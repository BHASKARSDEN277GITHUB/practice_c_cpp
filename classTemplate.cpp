//class templates .. 

#include<iostream>

using namespace std;

template <class mytemp>
class temp{

	private :
	mytemp a;
	mytemp b ;
	
	public :
	//constructor ..
	temp(mytemp x , mytemp y)
	{
		this->a=x;
		this->b=y;
	
		cout<<a<<endl<<b<<endl;
	}
	
	//funciton to calculate product ..
	
	void product(mytemp x , mytemp y)
	{
		cout<<(x*y)<<endl;
	}
	

	
};

main()
{
	temp<int> var =temp<int>(1,3);
	temp<float> var1 =temp<float>(2.3,5.8);
	var.product(3,2);
	var1.product(43.3,34.232);
}

