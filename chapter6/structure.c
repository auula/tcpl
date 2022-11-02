/* 声明一个结构体并且使用它 */
#include <stdio.h>

struct Person {
	unsigned short age;
	char *name;
};

int main() {
	struct Person people = { 22, "Leon Ding" };
	printf("people = { age: %d, name:%s }\n",people.age,people.name);	
	return 0;
}


