/* 编写一个伪随机数生成器 */
#include <stdio.h>

int random(void);


// 伪随机数种子
unsigned long int next = 1;

int random(void) {
	// 第一次是固定的值
	next = next * 1103515245 + 12345;
	// 第二次就是前一次基础之上随机
	return (unsigned int)(next/65536) % 32768;
}


int main() {
	unsigned int num = 0;
	for (int i = 0; i < 100; ++i) {
		num = random();
		printf("random value is %d \n",num);
	}
	return 0;
}
