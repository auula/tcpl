#include <stdio.h>

#define LOWER  0
#define UPPER  300
#define STEP   20


int main() {
	
	printf("|------Fahr-----|----Celsius----|\n");
		
	for (int fahr = LOWER;fahr <= UPPER;fahr += STEP) {
		printf("|\t%3d \t|\t%6.1f \t|\n",fahr,(5.0 / 9.0) * (fahr - 32.0));
	}
	
	printf("|-------------------------------|");
	
	return 0;
}
