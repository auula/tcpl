/* 实现命令行echo相应的版本 */
#include <stdio.h>

int main(int argc, char *argv[]) {
	while (--argc > 0)
		printf((argc > 1) ? "%s " : "%s", *++argv);
	return 0;
}
