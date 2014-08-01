#include<stdio.h>

//driver method to test the program 
main() {
	int T ;
	scanf("%d",&T);
	int n , k , i , startIndex, count ;
	if(T>=1 && T<=10) {

	while(T--) {
		scanf("%d%d",&n,&k);
		int a[n];
		count=0;
		int flag=1 ;
		

			for(i=0;i<n;i++) {
				scanf("%d",&a[i]);
				if(!(a[i]>=1 && a[i]<=100)) {
					flag=0;
					break ;
				}
			}
			

			for(i=0;i<n;i++) {
				if(i==0&&a[i]%2==0) {
					count=1;
		
				}else if(a[i-1]%2==0 && a[i]%2==0) {	
					count++;
					if(count==k) {
						break;
					}
					}else if(a[i-1]%2 !=0 && a[i]%2==0){
						count=1;
					}else {
						count=0;
					}
				}

				if(count==k) {
					printf("YES\n");
				}else {
					printf("NO\n");
				}
	}
	} else {
		printf("NO\n");
	}
}
