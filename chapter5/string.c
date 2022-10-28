/* 用指针的方式遍历字符串 */
#include <stdio.h>

void range(char *pi);

int main() {
	char s[] = "Hello C.";
	
	char *pi = s;

	range(pi);

	return 0;
}


void range(char *pi) {
	for (;*pi != '\0';pi++) {
		printf("%c\n",*pi);
	}
}
