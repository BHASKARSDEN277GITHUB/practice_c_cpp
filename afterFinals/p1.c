#include<stdio.h>

main() {
	
	int n;
	scanf("%d",&n);
	int a[n];
	int i=0; //iterator 
	int j=n;
	while(j--) {
		
		scanf("%d",&a[i]);
		i++;
	}
	
	//main logic 
	int maxSoFar=0;
	for(i=0;i<n;i++) {
	
		for(j=0;j<n;j++) {
			
			if(i!=j && ((a[i]&a[j]) > maxSoFar)) {
		
				maxSoFar=a[i]&a[j];
			}
		}
	}
	
	printf("%d",maxSoFar);
}
