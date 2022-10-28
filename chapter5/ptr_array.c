/* 通过指针的方式给外部数组赋值  */
#include <stdio.h>


#define SIZE 10

void print_arr(int *pi);

int main() {
	int n, array[SIZE];
	for (n = 0; n < SIZE ; n++) {
		array[n] = n; 
	}
	print_arr(&array[0]);	
	return 0;
}


void print_arr(int *pi) {
	for (int i = 0; i < SIZE; i++) {
		printf("array[%d] = %d\n",i,*pi+i * 10);
	}
}
