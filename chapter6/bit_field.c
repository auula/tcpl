/* 通过位字段节省内存 */
#include <stdio.h>

struct {
	unsigned int is_keyword : 1;
	unsigned int is_extren  : 1;
	unsigned int is_static  : 1;
} flags;

int main() {
	flags.is_keyword = flags.is_extren = 1;
	flags.is_static = 0;
	printf("flags.is_keyword = %d,flags.extren = %d,flags.static = %d\n",flags.is_keyword,flags.is_extren,flags.is_static);
	return 0;
}
