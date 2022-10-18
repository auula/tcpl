/* 通过全局外部变量的方式实现查找最长输入字符串  */

#include <stdio.h>

#define MAXLINE 1000 /* 最大长度为1000 */

int max;			   /* 当前最长的长度 */
char line[MAXLINE];	   /* 当前的输入行 */
char longest[MAXLINE]; /* 保存最长的字符串 */

/* 原型函数 */
int getlines(void);
void copy(void);

int main()
{
	int len = 0;

	/* 使用extern关键字来导入外部变量，不同类型的分开写 */
	extern char longest[];
	extern int max = 0;

	while ((len = getlines()) > 0)
	{
		if (len > max)
		{
			max = len;
			copy();
		}
	}

	if (max > 0)
	{
		printf("longest : %s", longest);
	}

	return 0;
}

int getlines(void)
{

	int c, i;

	/* 使用extern关键字来导入外部变量 */
	extern char line[];

	for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
	{
		line[i] = c;
	}

	if (c == '\n')
	{
		line[i] = c;
		++i;
	}

	line[i] = '\0';

	return i;
}

void copy(void)
{

	int i = 0;

	/* 同类型的变量可以放到一起引入 */
	extern char line[], longest[];
	while ((longest[i] = line[i]) != '\0')
		++i;
}