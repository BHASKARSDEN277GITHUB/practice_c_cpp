#include<stdio.h>

int sameWall(int [][4],int);
int overlap(int [][4],int);
int sameCorner(int [][4],int);

void main() { 

	int n; //number of construction zones scanf("%d",&n);
	scanf("%d",&n);

	int zArray[n][4];
	int i;
	int j;

	//reading the input
	for(i=0;i<n;i++) {
		for(j=0;j<4;j++) {
			scanf("%d",&zArray[i][j]);
		}
	}
	
	if(sameWall(zArray,n)||overlap(zArray,n)||sameCorner(zArray,n)) {
		printf("Overlap\n");
	}else {
		printf("No Overlap\n");
	}
}

int sameWall(int a[][4],int n) {
	//check for all conditions possible for same wall for each construction zone
	int i ; //current construction zone
	int a1,b1,a2,b2,x1,y1,x2,y2;
	int flag=0;
	int j;
	for(i=0;i<n;i++) {
		a1=a[i][0];
		b1=a[i][1];
		a2=a[i][2];
		b2=a[i][3];
		for(j=0;j<n;j++) {
			if(j!=i) {
				x1=a[j][0];
                  		y1=a[j][1];
               			x2=a[j][2];
 		                y2=a[j][3];
				
				//check for overlap with current construction zone
				if((b2==y1)&&(((x1>a1)&&(x1<a2))||((x2<a2)&&(x2>a1))||((x1<a1)&&(x2>a2)))) {
					flag=1;
					return flag;
				}else if((b1==y2)&&(((x1>a1)&&(x1<a2))||((x2<a2)&&(x2>a1))||((x1<a1)&&(x2>a2)))) {
					flag=1;
					return flag;
				}else if((a2==x1)&&(((y1<b2)&&(y1>b1))||((y2<b2)&&(y2>b1))||((y2>b2)&&(y1<b1)))) {
					flag=1;
					return flag;
				}else if((a1==x2)&&(((y1<b2)&&(y1>b1))||((y2<b2)&&(y2>b1))||((y2>b2)&&(y1<b1)))) {
					flag=1;
					return flag;

				} else {
					//do nothing
				}
				

			}
		}
		
	}
	return 0;
	
}

int overlap(int a[][4],int n) {
	//check for all conditions possible for same wall for each construction zone
        int i ; //current construction zone
        int a1,b1,a2,b2,x1,y1,x2,y2;
        int flag=0;
        int j;

        for(i=0;i<n;i++) {
                a1=a[i][0];
                b1=a[i][1];
                a2=a[i][2];
                b2=a[i][3];
                for(j=0;j<n;j++) {
                        if(j!=i) {
                                x1=a[j][0];
                                y1=a[j][1];
                                x2=a[j][2];
                                y2=a[j][3];

				//check for overlap with current construction zone
                                if((b2>y1&&y1>b1)&&(((x1>a1)&(x1<a2))||((x2<a2)&&(x2>a1))||((x1<a1)&&(x2>a2)))) {
                                        flag=1;
                                        return flag;
                                }else if((b1<y2&&y2<b2)&(((x1>a1)&&(x1<a2))||((x2<a2)&&(x2>a1))||((x1<a1)&&(x2>a2)))) {
                                        flag=1;
                                        return flag;
                                }else if((a2>x1&&a1<x1)&(((y1<b2)&&(y1>b1))||((y2<b2)&&(y2>b1))||((y2>b2)&&(y1<b1)))) {
                                        flag=1;
                                        return flag;
                                }else if((a1<x2&&x2<a2)&&(((y1<b2)&(y1>b1))||((y2<b2)&&(y2>b1))||((y2>b2)&&(y1<b1)))) {
                                        flag=1;
                                        return flag;

                                } else {
                                        //do nothing
                                }
			}
		}
	}
	return 0;

}

int sameCorner(int a[][4],int n) {
	//check for all conditions possible for same wall for each construction zone
        int i ; //current construction zone
        int a1,b1,a2,b2,x1,y1,x2,y2;
        int flag=0;
        int j;

        for(i=0;i<n;i++) {
                a1=a[i][0];
                b1=a[i][1];
                a2=a[i][2];
                b2=a[i][3];
                for(j=0;j<n;j++) {
                        if(j!=i) {
                                x1=a[j][0];
                                y1=a[j][1];
                                x2=a[j][2];
                                y2=a[j][3];

                                //check for overlap with current construction zone
				if(((a1==x1)&&(b1==y1))||((a1==x2)&&(b1==x2))) {
					flag=1;
					return flag;
				}else if(((a2==x1)&&(b2==y1))||((a2==x2)&&(b2==x2))) {
					flag=1;
					return flag;
                                } else {
                                        //do nothing
                                }
			}
		}
	}
	return 0;
}

