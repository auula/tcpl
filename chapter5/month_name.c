/* 给定一个1-12数组返回对应的月份名称  */
#include <stdio.h>

/* 输入数字返回月份 */
char *getmonth(int n);

int main() {
	printf("%s\n",getmonth(11));
	return 0;
}

char *getmonth(int n) {
	/* 月份  */
	static char *name[] = {
		"Illegal month",
		"January", "February", "March",
		"April", "May", "June",
		"July", "August", "September",
		"October", "November", "December",
	};

	return (n < 1 || n > 12) ? name[0] : name[n];
}
