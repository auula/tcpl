#include <stdio.h>

// Multiplication Tables
// https://www.cuemath.com/multiplication-tables/
int main() {
	
	for (int i=1;i<=9;i++) {
		for (int j=1;j<=i;j++) {
			printf("%2d *%2d = %2d ",j,i,i*j);
		}
		printf("\n");
	}
}
