/* ++ 在前和 ++在后的区别 */
#include <stdio.h>

int main() {
	
	int n = 1;	
	
	++n;
	n = n + 1;
	n++;
	int res = n + 1;
	
	printf("result = %d \n",res);

	return 0;
}
