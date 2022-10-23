/* 翻转字符串 */

#include <stdio.h>
#include <string.h>


void reverse(char s[]);

int main() {
	char str[] = "上海自来水来自海上";
	printf("%s\n",str);
	reverse(str);
	printf("%s\n",str);
	return 1;
}


void reverse(char s[]) {

	int temp, i, j;

	for (i = 0,j = strlen(s) - 1; i < j; i++, j--) {
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}

