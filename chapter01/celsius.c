#include <stdio.h>

int main() {
	int fahr,celsius;

	int lower = 0;
	int upper = 300;
	int step = 20;
	fahr = lower;
	
	printf("|-----Celsius-----|-----Fahr----|\n");

	while (fahr <= upper) {
		// 如果格式计算摄氏度
		celsius = 5 * (fahr-32) / 9;
		printf("\t %d\t |\t %d\t\n",fahr,celsius);
		// 每次变更华氏度
		fahr = fahr + step;		
	}
	return 0;
}
