#include<stdio.h>

#define macro(x,y) x+y

main() {
	int a=macro(1,2);
	printf("%d",a);
}
