// 统计单词数、行数、字符数
#include <stdio.h>

// 输入的状态转换
#define IN 1
#define OUT 0

// 统计辅助转换符
#define LINE   '\n'
#define TABLE  '\t'
#define BLANK  ' '

int main() {
    
    // 输入字符、行数、单词数、字符数、输入单词状态
    int c, nl, nw, nc, state;

    state = OUT;
    // 可以简写初始化
    nl = (nw = (nc = 0));

    // ctr + d == EOF
    while ((c = getchar()) != EOF ) {
        ++nc;
        if (c == LINE) {
            ++nl;
        }
        if (c == LINE || c == TABLE || c == BLANK) {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }

    printf("Lines: %d Words: %d Chars: %d \n",nl,nw,nc);

    return 0;
}


