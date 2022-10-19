/* 枚举类型是一个常数整数值 */
#include <stdio.h>


/* 枚举类型通过enum关键字声明，如果没有指定值就从0开始递增，如果指定了值其后面字段值会按照前面的值基础之前递增 */
enum Months {
	JAN = 1, FEB, MAR, APR, MAY, JUN,
	JUL, AUG, SEP, OCT, NOV, DES } month;

int main() {
	
	/* 遍历枚举  */
	for (month = JAN; month <= DES; month++) {
		printf("enum value is : %d \n",month);
	}
	
	return 0;
}
