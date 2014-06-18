#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

 
void quickSort(int *,int,int);
int main() {
    int n, k, i, count;
    scanf("%d%d", &n, &k);
    int *prices = (int *)malloc(sizeof(int)*n);
    for(i=0; i<n; i++) {
        scanf("%d", &prices[i]);
    }
     
   
    int answer = 0;
    // Compute the answer
    
    quickSort(prices,0,n-1);
    
    for(i=0;i<n;i++) {
       count+=1;
	answer+=prices[i];
	
        if(answer<=k)
            {//continue ..
	}	
        else
        {
           answer-=prices[i];
		count-=1;
            break;
        }  
            
    }
        
    
    
    printf("%d\n", count);
      
    return 0;
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

