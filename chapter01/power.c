/* 求某数的n次幂 */
#include <stdio.h>

/* 声明和定义一个求次幂的函数 */
int power(int m,int n);

int main() {
	int p = power(2,5);
	printf("%d\n",p);
	return 0;
}

int power(int base,int n) {
	int p = 1;
	/* n 用来控制循环次数 */
	for (int i = 1; i <= n; i++) 
		p = p * base;
	return p;
}
