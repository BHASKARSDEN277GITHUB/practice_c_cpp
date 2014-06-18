#include<iostream>
using namespace std ;
main()
{
    int t , k ;
    int result[100] ;
    int array[100];
    int l =0;
    int rl =0;
    cin>>t ; //test cases ..
    int carry=0;
    
    while(t>0)
    {
        cin>>k;
	int a =(int)k/2 ;
	int b=k-(int)k/2;
	//put digits of a in array ..

	while(a!=0)
	{
		array[l++]=a%10;
		a=a/10;
	}

	for(int i=0;i<l;i++)
	{
		int d =(carry+array[i]*(b));
		result[rl++]=d%10;
		carry=d/10;
	}
	
	while(carry!=0)
	{
		result[rl++]=carry%10;
		carry=carry/10;
	}
	
	for(int j=rl-1;j>=0;j--)
	{
		cout<<result[j];
	}
	cout<<endl;
	l=0;
	rl=0;
	t--;
    }
}
