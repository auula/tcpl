/* 实现一个内存分配功能 */
#include <stdio.h>

#define MAXSIZE 100

/* 可使用的内存区域  */
static char allocbuf[MAXSIZE];

/* 下一个从哪里开始分配 */
static char *allocp = allocbuf;

/* 通过alloc分配内存 */
char *alloc(int n);
/* 释放该区域的指针 */
void afree(char *p);
/* 打印allocbuf中的元素 */
void ptallocbuf(void);

int main() {
	/* 需要注意分配内存和释放内存要成正比 */
	char *pi = alloc(6);
	
	pi = "Hello";
	
	printf("%s\n",pi);
	
	afree(pi);
	
	char *new = alloc(6);

	new = "World";

	printf("%s\n",pi);
	
	return 0;
}

void ptallocbuf(void) {
	extern char allocbuf[];
	printf("%c\n",allocbuf[0]);
}

char *alloc(int n) {
	if (allocbuf + MAXSIZE - allocp >= n) {
		allocp += n;
		return allocp - n;
	} else {
			return 0;
	}
}

void afree(char *p) {
	if (p >= allocbuf && p < allocbuf + MAXSIZE) {
		printf("free memory!");
		allocp = p;
	}
}

