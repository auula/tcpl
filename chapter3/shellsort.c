/* 希尔排序 */
#include <stdio.h>

void shellsort(int v[],int n);

int main() {
	int arr[] = {22,23,11,3,66,100};
	
	int len = sizeof(arr) / sizeof(arr[0]);
	
	shellsort(arr,len);
	
	for (int i = 0; i < len; i++) {
		printf("%d\n",arr[i]);
	}
	
	return 0;
}

void shellsort(int v[],int n) {
	int gap, i, j, temp;
	for (gap = n/2; gap > 0;gap /= 2) {
		for (i = gap; i < n; i++) {
			for (j = i - gap; j >= 0 && v[j] > v[j+gap]; j-=gap) {
				temp = v[j];
				v[j] = v[j+gap];
				v[j+gap] = temp;
			} 
		}
	}
}
