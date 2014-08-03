#include<stdio.h>

//driver method to test the program 
main() {
	int T ; //testcases
	scanf("%d",&T);
	long long  xin , yin ;
	long long  x , y ;
	long long count=0;

	int fx ,fy ; //flags
	int temp ; //temporary variable
	int flag=0;//flag to tell if valid point or no on termination 
	while(T--) {
		x=0,y=0,count=0;
		int f=1;
		scanf("%lld%lld",&xin,&yin);
		int p=0 , m =0 ;
		while(x<=1000000000 && y<=1000000000 && x>=-1000000000 && y>=-1000000000) {
			if(count==0) {
	                         count++;
			}
			
			if(f==1) {
				if(count%2!=0) { //increment x in this case 
					temp=x;
					x=x+count;	
					p++;
					count++;
					if(xin>=temp&&xin<=x&&yin==y) {
						printf("YES\n");
						flag=1;
						break;
					}
				} else {
					temp=y;
					y=y+count;
					p++;
					count++;
					if(yin>=temp&&yin<=y&&xin==x) {
                                                printf("YES\n");
						flag=1;
                                                break;
                                        }
				}
			} else {
				if(count%2!=0) { //decrement x in this case
					temp=x;
					x=x-count ;
					m++;
					count++;
					if(xin<=temp&&xin>=x&&yin==y) {
                                                printf("YES\n");
						flag=1;
                                                break;
                                        }
				} else {
					temp=y;
					y=y-count ;
					m++;
					count++;
					if(yin<=temp&&yin>=y&&xin==x) {
                                                printf("YES\n");
						flag=1;
                                                break;
                                        }
				}
			}

		//	printf("%d\n",count);
               		if(p==2) {
               	        	f=0;
               	        	p=0;
               		}
                	if(m==2) {
                       		f=1;
                        	m=0;
                	}

			if(xin<x&&yin<y) {
				printf("NO\n");
				break;
			}


		}
	}

	
}
