/* 计算某个字符串的长度 */
#include <stdio.h>

/* 缓冲区最大长度  */
#define MAXLINE 1000

/* 函数原型 */
int slen(char str[]);

int main() {
	// char str[] = {'H','e','l','l','o'};
	
	char str[MAXLINE];
	int c = 0;
	int i = 0;
	

	for (i=0; i < MAXLINE-1 && (c = getchar()) != EOF && c != '\n';++i) {
		str[i] = c;	
	}

	if (c == '\n') {
		str[i] = c;
		++i;
	}	
		
	str[i] = '\0';
	
	printf("%s length : %d",str,slen(str));
	return 0;
}


int slen(char s[]) {
	
	int i = 0;

	while (s[i] != '\0')
		++i;
	
	return i;
}
