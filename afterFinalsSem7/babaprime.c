#include<stdio.h>
#include<math.h>

int isPrime(int); 

void main() {
	int T;
	int a,b,c;
	int result;
	int x;

	//printf("%d\n",isPrime(-13));
	scanf("%d",&T);
	while(T--) {
		x=0;
		scanf("%d%d%d",&a,&b,&c);
		result=a*x*x+b*x+c;
		//printf("result : %d\n",result);
		while(isPrime(result)) {
			x++;
			result=a*x*x+b*x+c;
		}
		printf("%d\n",x);
	}

}

int isPrime(int a) {
	if(a<2) {
		//assuming that negative numbers are not prime
		return 0;
	}

	int root=sqrt(a);
	int i=2; //iterator
	int flag=1;
	while(i<=root) {
		if(a%i==0) { 
			flag=0;
			break;
		}
		i++;
	}
	return flag;
}
