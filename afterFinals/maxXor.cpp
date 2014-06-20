#include<iostream>

using namespace std;
/*
 * Complete the function below.
 */
int maxXor(int l, int r) {
    int max=l^r;
    int i , j ;
//	cout<<max<<endl;
//    cout<<l<<endl<<r<<endl<<max<<endl;
    for(i=l;i<=r;i++)
    {
        for(j=i;j<=r;j++)
        {
            max=(max>(i^j)) ? max : i^j;
//	    cout<<max<<endl;
            
        }
    }   
    return max;

}

int main() {
    int res;
    int _l;
    cin >> _l;
    
    int _r;
    cin >> _r;
    
    res = maxXor(_l, _r);
    cout << res;
    
    return 0;
}

