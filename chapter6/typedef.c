/* 自定义类型 */
#include <stdio.h>

typedef int Integer;

typedef Integer MyInteger;

typedef unsigned int UInteger;


typedef char * String;

int main() {
	int a = 10;

	Integer b = 9;

	UInteger c = 11;

	MyInteger d = 89;

	printf("a = %d , b = %d, c = %d, d = %d\n",a,b,c,d);

	String s1 = "string variable.";
	
	printf("%s\n",s1);
}
