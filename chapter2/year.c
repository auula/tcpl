/* 计算某个年份是否为润年  */
#include <stdio.h>


/* 年份变量  */
int year = 0;

/* 函数原型 */
int checked(int year);


int main() {

	extern int year;

	printf("input year: \n");
	scanf("%d",&year);

	printf("%d %s leap year \n",year,checked(year) > 0 ? "is" : "not");
	return 0;
}

int checked(int year) {
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		return 1;
	} else {
		return 0;
	}
}
