/* 结构的三种传递方式 */
#include <stdio.h>

struct point {
	int x;
	int y;
};

struct point makepoint(int x,int y);

struct point addpoint(struct point p1, struct point p2);

struct point* ptrpoint(struct point *pp);


int main() {
	struct point p1 = makepoint(10,20);
	
	printf("p1.x = %d p1.y = %d\n",p1.x,p1.y);
	
	struct point p2 = {10,20};
	
	p1 = addpoint(p1,p2);

	printf("p1.x = %d p1.y = %d\n",p1.x,p1.y);
	
	struct point* p3 = ptrpoint(&p1);

	printf("p3.x = %d p3.y = %d\n",(*p3).x,(*p3).y);

	return 0;
}

struct point makepoint(int x,int y) {
	struct point temp;
	
	temp.x = x;
	temp.y = y;
	return temp;
}

struct point addpoint(struct point p1, struct point p2) {
	p1.x += p2.x;
	p1.y += p2.y;
	
	return p1;
}

struct point* ptrpoint(struct point *pp) {
	pp->x *= pp->y;
	pp->y *= pp->y;
	return pp;
}
