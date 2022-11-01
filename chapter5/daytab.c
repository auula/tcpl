/* 输入一个日期计算这一年的第几天 */
#include <stdio.h>

int day_of_year(int, int, int);


static char daytab[2][13] = {
	{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
	{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
};

int main() {
	int day = day_of_year(2022,11,1);
	printf("%d\n",day);
	return 0;
}

int day_of_year(int year, int month, int day) {
	int i, leap;
	
	leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;

	for (i = 1; i < month; i++) {
		day += daytab[leap][i];
	}
		
	return day;
}
