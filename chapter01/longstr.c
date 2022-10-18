/* 要求输入多个字符串，要找出最长那个字符串 */
#include <stdio.h>

/* 初始化最长字符串空间 */
#define MAXLINE 10

/* 声明函数原型 */
int getlines(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
	int len = 0, max = 0;

	// int state = 1;

	char line[MAXLINE];
	char longest[MAXLINE];

	/* 如果有值就一直读取  */
	while ((len = getlines(line, MAXLINE)) > 0)
	{
		if (len > max)
		{
			max = len;
			copy(longest, line);
		}
	}

	/* 如果有值就输出 */
	if (max > 0)
	{
		printf("you input max line is: %s", longest);
	}
	return 0;
}

int getlines(char s[], int max)
{

	/* 不停的循环读取输入存储起来  */
	int c, i;

	for (i = 0; i < max - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
	{
		s[i] = c;
	}

	if (c == '\n')
	{
		s[i] = c;
		++i;
	}

	/* 表示一行字符串结束标记\0  */
	s[i] = '\0';

	/* 读取了多少返回多少 */
	return i;
}

void copy(char to[], char form[])
{
	int i = 0;
	/* 只要没有复制到字符串末尾就一直循环复制 */
	while ((to[i] = form[i]) != '\0')
		++i;
}
