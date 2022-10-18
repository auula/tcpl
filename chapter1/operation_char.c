#include <stdio.h>

/* 读取命令行输入并且输出 */
int main() {
	
	printf("input a character:\n");
	
	// 这里使用int是因为可以让其存储空间足够大，能存储字符也能存储数字	
	int c = getchar();

	while(c != EOF) {
		putchar(c);
		c = getchar();
	}
		
	// 不写就无法退出
	return 0;
}
