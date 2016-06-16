#include "stack.h"
#include<stdio.h>

int x[10];
int topIndex=0;

void push(int a){
        if(topIndex < 9) {
                x[topIndex] = a;
                topIndex++;
        }else{
                printf("stack is full\n");
        }
}

int pop(){
        if(topIndex > 0){
                topIndex--;
                return x[topIndex+1];
        }else{
                printf("stack is empty\n");
                return 0;
        }

}
