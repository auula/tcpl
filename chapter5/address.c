/* 通过地址运算取值 */
#include <stdio.h>

int main() {
	int arr[] = {1,2,3,4,5,6};

	int *pi = arr;
	
	int sum = 0;
	
	sum = *(pi += 5);
	
	printf("%d + %d = %d\n",arr[0],arr[4],sum);

	return 0;
}
