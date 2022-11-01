/* 实现命令行echo相应的版本 */
#include <stdio.h>

int main(int argc, char *argv[]) {
	printf((argc > 1) ? "%s " : "%s", *++argv);
	return 0;
}
