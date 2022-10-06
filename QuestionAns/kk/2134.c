#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int N, i, j, t;
    while(scanf("%d", &N) != EOF)
    {
        for(i = 1, t = 1; i <= N; i++, t *= 10);
        //printf("%d", t);
        for(i = t / 10; i <= t - 1; i++)
        {
            if(i == (i * i) % t)
            {
                printf("%d", i);
                break;
            }
        }  // 特殊处理输出的第一个数
        for(j = i + 1; j <= t - 1; j++)
        {
            if(j == (j * j) % t)
                printf(" %d", j);
        }
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 2134
	User: 202001060117
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

