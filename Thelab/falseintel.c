#include <stdio.h>

int main() {
	File *fp;
	char c;
	fp = fopen(fileno, "r");

	do{
	  c= getc(fp);
	  putchar(c);
	}
	while(c!=EOF);
	fclose(fp);
	return 0;
}
