#include <stdio.h>

// 符号常量
#define LOWER  0
#define UPPER  300
#define STEP   20

/* 原型函数，方便编译器检测 */
float celsius(int);


int main() {

	printf("|------Fahr-----|----Celsius----|\n");

	for (int fahr = LOWER;fahr <= UPPER;fahr += STEP) {
		printf("|\t%3d \t|\t%6.1f \t|\n",fahr,celsius(fahr));
	}

	printf("|-------------------------------|");

	return 0;
}

float celsius(int fahr) {
	return (5.0 / 9.0) * (fahr - 32.0);
} 

