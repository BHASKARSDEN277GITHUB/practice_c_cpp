#include<iostream>
using namespace std ;


void quickSort(int * , int ,int); // to sort the array  of candies ..

main()
{
	int n , k , unfairness=0 ;
	cin>>n>>k;
	int candies[n]; //to store n packets candies's values ..
	//get candies ..
	
	for(int l=0;l<n;l++)
	{
		cin>>candies[l];
	}

	int i , j ;
	int *p=candies;
	i=0;j=n-1;
	

	
	//sort candies[n];
	quickSort(p,i,j);
	

	for(i=0;i<n;i++)
	{
		cout<<candies[i];
	}
	
	cout<<endl;

	int max , min ;
	unfairness=candies[k-1]-candies[0];

	//cout<<"unfairness"<<unfairness<<endl;
	for(i=0;i<n;i++)
	{
		j=i+k-1;  //for i=0 , j=3;
		max=candies[j];
		min=candies[i];
		unfairness=(unfairness<=(max-min)) ? unfairness:(max-min);
		//cout<<unfairness<<endl;
		
	}
	
	cout<<unfairness<<endl;
		
	
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
	
	
	
