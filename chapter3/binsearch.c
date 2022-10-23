/* 编写二分查找，在一个有序的从小到大的有序数列中找到最新的值  */
#include <stdio.h>

/* 函数原型  */
int binsearch(int s[],int v,int n);

int main() {
	
	int s[] = {12,55,78,99,231,1000};
	
	int length = sizeof(s) / sizeof(s[0]);
	
	printf("99 index : %d \n",binsearch(s,99,length));

	return 0;
}

int binsearch(int s[],int v,int n) {
	
	int low, high, mid;

	low = 0;
	high = n - 1;

	while(low <= high) {
		mid = (low + high) / 2;
		if (v < s[mid]) {
			high = mid - 1;
		} else if (v > s[mid]) {
			low = mid + 1;
		} else {
			return mid;
		}
	}
	
	return -1;
}
