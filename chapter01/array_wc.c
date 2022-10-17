/* 统计输入的字符串中各个数字出现的次数和空格、行、制表符次数  */
#include <stdio.h>

// test code : my tel 199900000000

#define BLANK ' '
#define TBALE '\t'
#define LINE  '\n'

int main() {
	
	int c, i, nwhite, nother;
	int ndigit[10];

	nwhite = nother = 0;
	

	/* 初始化为0 */
	for (i = 0; i < 10; i++) {
		ndigit[i] = 0;
	}
	
	while ((c = getchar()) != EOF) {

		/* 确定输入的字符是否是数字范围 */
		if (c >= '0' && c <= '9') {	
			// 获取输入的数字下标对其出现次数的位置加一，- ‘0’是为了转换int
			++ndigit[c - '0'];
		}
		
		if (c == LINE || c == BLANK || c == TBALE) {
			++nwhite;
		} else {
			++nother;
		}		
	}	

	printf("digit = ");
		
	for (int i = 0; i < 10; i++) {
		printf("%d ", ndigit[i]);
	}
	
	printf("white space : %d other : %d",nwhite,nother);		
	
	return 0;
	
}
