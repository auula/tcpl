/* 将十六机制的字符串转换成整数型  */
#include <stdio.h>


/* 通过十六进制的字符串转换成整数  */
int htoi(char hex[]);

int htoi(char hex[]) {
	
	int n = 0; // 返回值
	
	int i = 0; // 数组的下标 
	if ((hex[i] == '0' && hex[i+1] == 'x') || hex[i+1] == 'X') {
		i = 2;
		// true
		while (1) {
	
			if (hex[i] >= '0' && hex[i] <= '9') {
				n = 16 * n + (hex[i] - '0');
			} else if (hex[i] >= 'A' && hex[i] <= 'F') {
				// A - F 是从10开始的
				n = 16 * n + (hex[i] - 'A' + 10);
			} else if (hex[i] >= 'a' && hex[i] <= 'f') {
				n = 16 * n + (hex[i] - 'a' + 10 );
			} else {
				break;
			}
			++i;	
		}
	}

	return n;
}


int main() {
	char hex[] = "OXFul";
	printf("%s\n",hex);
	printf("%d\n",htoi(hex));
	return 0;
}
