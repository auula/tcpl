/* 通过指针指向字符串 */
#include <stdio.h>

int main() {
	char s[] = "Hello";
	
	char *pi = s;	

	printf("%s\n",pi);
	
	s[1] = 'a';
	
	printf("%s\n",pi);
	
	char *p = "Java";
	
	// *p = "Hello";
	
	printf("%s\n",p);	
}
