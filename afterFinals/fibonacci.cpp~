#include<iostream>
using namespace std ;

main()
{
	int t ;
	int n;
	
	cin>>t;
	
	while(t--)
	{
		cin>>n;
		int flag=1;
		long count=0;
		int fib1=0;
		int fib2=1;
		int fib;
		int yes=0;
		if(n==0||n==1)
		{
			yes=1;
		}
		else
		{
		while(flag!=0)
		{
		
			if(fib>n)
			{
				flag=0;
			}
			else
			{
				fib=fib1+fib2;
				fib1=fib2;
				fib2=fib;
//				cout<<"fib:"<<fib<<endl;
				if(fib==n)
				{
					flag=0;
					yes=1;
//					cout<<"mil gya"<<endl;
				}
				
			}
		}
		}
		if(yes==1)
		cout<<"IsFibo"<<endl;
		else
		cout<<"IsNotFibo"<<endl;
	}
}

