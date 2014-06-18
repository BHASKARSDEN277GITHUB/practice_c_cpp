#include<iostream>
using namespace std;
void quickSort(int * , int ,int); // to sort the array  of maxSum ..
main()
{
    int t , n ,a , b;
    cin>>t; //testcases ..
    
    while(t--)
    {
        cin>>n;
        cin>>a;
        cin>>b;
        
        int i=0;
        int maxSum[n];
	if(a==b)
	{cout<<(n-1)*a<<endl;}
	else
	{
        for(i=0;i<n;i++)
        {

                maxSum[i]=i*a+(n-1-i)*b;

        }
        
        int *p=maxSum;
	quickSort(p,0,n-1);     

	for(i=0;i<n;i++)
	{
		cout<<maxSum[i]<<" ";
	}
        cout<<endl;
	}
        
    }    
    
}

void quickSort(int *a,int start ,int end)
{
	int p=start-1;int q=start;int r=end;
	int pivot=a[r];
	if(start<end)
	{
		while(q<r)
		{
			if(a[q]<=pivot)
			{
				p++;
				int temp=a[q];
				a[q]=a[p];
				a[p]=temp;
				q++;
			}
			else
			{
				//continue;
				q++;
			}
		}
	
		int temp=a[r];
		a[r]=a[p+1];
		a[p+1]=temp;
	
		quickSort(a,start,p);
		quickSort(a,p+1,end);
	}
}
	
