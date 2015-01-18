#include<stdio.h>

//method prototypes
int findMax(int [],int [] , int , int); //arguments are value array , weight array , weight max , number of items
int m(int ,int);
main() {
        printf("Enter number of items you have\n");
        int n ;
        scanf("%d",&n);
        int v[n];
        int w[n];
        printf("Enter values of each item\n");
        int i ;
        for(i=0;i<n;i++) {
                scanf("%d",&v[i]);
        }   
        printf("Enter weights of each item\n");
        for(i=0;i<n;i++) {
                scanf("%d",&w[i]);
        }   
        printf("Enter values of max weight\n");
        int W;
        scanf("%d",&W);
        //calling findMax method
        printf("%d\n",findMax(v,w,W,n));

}

int findMax(int v[], int w[] , int W , int n) {
        int temp[n+1][W+1];

        int i;
        int j;

        for(i=0;i<=n;i++) {
                for(j=0;j<=W;j++) {
                        //main logic here
                        if(i==0||j==0) {
                                temp[i][j]=0;
                        } else if(w[i-1]<=j) {
                                temp[i][j]=m(v[i-1]+temp[i-1][j-w[i-1]] , temp[i-1][j]);
                        } else {
                                temp[i][j]=temp[i-1][j];
                        }

                }
        }

        return temp[n][W];
}
int m(int n1 , int n2) {
	return (n1>n2)?n1:n2;
}
