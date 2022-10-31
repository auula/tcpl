/* 字符串比较函数  */
#include <stdio.h>


/* 比较函数原型 */
int scmp(char *s,char *t);

int main() {
	char s[] = "Hello.";
	char t[6];
	
	int n = scmp(s,t);

	printf("%d\n",n);
	
	return 0;
}

int scmp(char *s,char *t) {
	for (;*s == *t;s++,t++) {
		if (*s == '\0') {
			return 0;
		}
	}
	return *s - *t;
}
