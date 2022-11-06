/* 自定义类型 */
#include <stdio.h>

typedef int Integer;

typedef Integer MyInteger;

typedef unsigned int UInteger;

int main() {
	int a = 10;

	Integer b = 9;

	UInteger c = 11;

	MyInteger d = 89;

	printf("a = %d , b = %d, c = %d, d = %d\n",a,b,c,d);
}
