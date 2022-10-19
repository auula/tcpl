/* 通过枚举的方式限制颜色类型 */
#include <stdio.h>

enum color {
	red = 1,
	green,
	blue,
	white
};

int main() {
	
	enum color favorite_color;	
	
	printf("enter your like color: \n");
	scanf("%u",&favorite_color);	

	switch (favorite_color) {
		case red:
			printf("you favorite color is red.");
			break;
		case green:
			printf("you favorite color is green.");
                	break;
		case blue:
                        printf("you favorite color is blue.");
                        break;
		case white:
                        printf("you favorite color is white.");
                        break;
		default:
                        printf("not you favorite color!");
	}
	
}
