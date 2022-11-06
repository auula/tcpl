/* 自定义类型 */
#include <stdio.h>

typedef int Integer;

typedef Integer MyInteger;

typedef unsigned int UInteger;

typedef char * String;

/* 通过自定义结构体声明类型  */
typedef struct MyPoint {
	float x;
	float y;
} Point;

/* 通过已有的结构体创建类型别名的指针 */
typedef Point *PP;

/* 给枚举类型创建别名 */
typedef enum {
	spring,
	summer,
	autumn,
	winter,
} Season;

/* 通过函数指针的方式声明别名 */
typedef int (*Sum)(int,int);

int sum(int i,int j) {
	return i + j;
}

int main() {
	int a = 10;

	Integer b = 9;

	UInteger c = 11;

	MyInteger d = 89;

	printf("a = %d , b = %d, c = %d, d = %d\n",a,b,c,d);

	String s1 = "string variable.";
	
	printf("%s\n",s1);

	Point p = {3.1415927, 434.1341};
	
	printf("p.x = %6.2f , p.y = %6.2f \n",p.x,p.y);	

	PP pp = &p;

	printf("pp.x = %6.2f , pp.y = %6.2f \n",pp->x,pp->y);	

	Season s = spring;

	printf("season = %u\n",s);
	
	Sum fun = sum;
	
	printf("5 + 5 = %d\n",fun(5,5));

}
