
#include<iostream>
using namespace std;

main()
{
    int n ;
     cin>>n ; //reading the size of input ..
    int input[n]; //integer array to store the input ..
    int output[100]; //output array for output ..
    int i ;
    for(i=0 ;i<n;i++)
    {
	cin>>input[i];
    }
    for(i=0;i<100;i++)
    {
	output[i]=0;
    }
    for(i=0;i<n;i++)
    {
        output[input[i]]++; //counting each integer's occurance ..
    }
    for(i=0;i<100;i++)
    {
        cout<<output[i]; //printing the count output array ..
    }    
        
}
