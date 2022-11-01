/* 通过函数指针的方式比大小 */
#include <stdio.h>

/* 通过函数指针的方式比较两个自然数的大小 */
void cmp(int i,int j,int(*comp)(int,int));

int greaterThan(int,int);

int lessThan(void *, void *); 

int main() {
	cmp(5,2,&greaterThan);
	return 0;
}

void cmp(int i, int j, int(*comp)(int, int)) {
	
	if ((*comp)(i,j) > 0 ) {
		printf("%d 大于 %d \n",i,j);	
	} else {
		printf("%d 小于 %d \n",i,j);
	}
	
}

int greaterThan(int i, int j) {
	if (i > j) {
		return 1;
	}
	return 0;
}
