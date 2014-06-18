#include <stdio.h>
int main() {

    int t, n, c, m;
    scanf("%d", &t);
    while ( t-- )
    {
        scanf("%d%d%d",&n,&c,&m);
        int answer = 0;
        int wrapper=0;
        
        answer+=(int)n/c;
        wrapper=answer;
        
        while(wrapper>=m)
        {
            answer+=(int)wrapper/m;
            wrapper=(int)wrapper%m+(int)wrapper/m; //remaining wrappers + new wrappers ..
        }    
        
        printf("%d\n",answer);
    }
    return 0;
}

