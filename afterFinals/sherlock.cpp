#include<iostream>
using namespace std ;

main()
{
    int n ,t ;
    cin>>t ; //testcases ..
    while(t--)
    {
        cin>>n;
        int i , x =0 , y=0;
        for(i=0;i<=n;i++)
        {
            if(i%3==0&x<=i)
            {
                if((n-i)%5==0)
                {
                    x=i;
                    y=n-i;
                }   
            }    
        }    
        if(x==0&&y==0)
            cout<<"-1"<<endl;
        else
        {
            for(i=0;i<x;i++)
            {
                cout<<'5';
            }
            for(i=0;i<y;i++)
            {
                cout<<'3';
                
            }
            cout<<endl;
        }
    }    
}
