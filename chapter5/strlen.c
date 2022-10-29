/* 计算字符串长度 */
#include <stdio.h>

int slen(char *s);

int main() {
	int n = slen("Hello World!");
	printf("slen = %d\n",n);
	return 0;
}

int slen(char *s) {
	int n;
	for (n = 0; *s != '\0'; s++) 
		n++;
	return n;
}
