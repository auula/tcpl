#include <stdio.h>

int main() {
	
	int c = 0;
	
	printf("enter a character：\n");
	while ((c = getchar()) != EOF ) {
		putchar(c);
	}
	
	return 0;
}
