//enums are used to map large list of things to integers

#include<stdio.h>

enum test {JAN,FEB};

main() {
	enum test x;
	x=JAN;
	if(x==JAN)
	printf("%s","its january");
}
