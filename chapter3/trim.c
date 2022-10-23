/* 去除字符串末尾的空白符号 */
#include <stdio.h>
#include <string.h>

#define BLANK  ' '
#define TBALES '\t'
#define LINE '\n'


int trim(char s[]) {
	int n;
	for (n = strlen(s); n >= 0; n--) {
		if (s[n] != BLANK && s[n] != TBALES && s[n] != LINE) {
			break;
		}
	}
	s[n+1] = '\0';
	return n;
}

int main() {
	char str[] = "Hello!	 ";
	trim(str);
	printf("%s\n",str);
	return 0;
}

