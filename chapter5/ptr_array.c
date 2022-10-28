/* 通过指针的方式给外部数组赋值  */
#include <stdio.h>


#define SIZE 10

void print_arr(int *pi);
void set_arr(int arr[]);

int main() {
	int array[SIZE];
	set_arr(array);
	print_arr(&array[0]);	
	return 0;
}


void set_arr(int arr[]) {
	for (int n = 0; n < SIZE; n++) {
		arr[n] = n;
	}
}


void print_arr(int *pi) {
	for (int i = 0; i < SIZE; i++) {
		printf("array[%d] = %d\n",i,*pi+i * 10);
	}
}
