/* 编写一个函数交换两个变量的值 */
#include <stdio.h>

void swap(int *px,int *py);

int main() {
	int i = 10, j = 100;
	printf("i = %d j = %d\n",i,j);
	swap(&i,&j);
	printf("i = %d j = %d\n",i,j);
}


void swap(int *px,int *py) {
	int temp = 0;
	
	temp = *px;
	*px = *py;
	*py = *px;
}
