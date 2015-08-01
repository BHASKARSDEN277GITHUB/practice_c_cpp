#include<stdio.h>

main() {

	FILE *file=fopen("testfile","rb");
	char c=fgetc(file);

	while(c!=EOF) {
		printf("%c",c);
		c=fgetc(file);
		
	}

}
