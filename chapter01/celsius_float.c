#include <stdio.h>

int main() {
	
	float fahr,celsius;
	
	int lower = 0;
	int upper = 300;
	int step = 20;
	
	// 自动转换int到float
	fahr = lower;
	
	printf("|------Fahr------|------Celsius------|\n");

	while(fahr <= upper) {
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("|\t %3.0f\t |\t %6.1f\t     |\n",fahr,celsius);
		fahr = fahr + step; 
	}
	
	printf("|------------------------------------|\n");

	return 0;
}

