/* 通过指针赋值字符串内容 */
#include <stdio.h>

/* 把字符串s中的值复制到t中  */
void scp(char *s, char *t);

int main() {
	char s[] = "string line.";
	char t[13];
	scp(t,s);
	
	printf("%s\n",t);

	return 0;
}

void scp(char *s, char *t) {
	while ((*s = *t) != '\0') {
		s++;
		t++;
	}
}
