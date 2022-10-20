#include<stdio.h>
#define lim 10 
#define EOF 46 
 
int main()
{
    enum loop { NO, YES };
    enum loop okloop = YES;
    int i = 0, c;
    while(okloop = YES)
    {
        if(i < lim - 1)
            okloop = NO;
        else if((c = getchar() != '\n'))
            okloop = NO;
        else if( c != EOF)
            okloop = NO;
        else
            i++;
    }
    return 0;
}
