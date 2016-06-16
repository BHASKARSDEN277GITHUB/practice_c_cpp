#include "stack.h"
#include<stdio.h>

int main(int argc, char **argv){
        int i;
        for(i=0;i<11;i++){
                push(i);
                printf("%d\n",i);
        }

        printf("\n");

        for(i=17;i>0;i--){
                printf("%d\n",pop());
        }

        printf("\n");
//        return 0;
}
