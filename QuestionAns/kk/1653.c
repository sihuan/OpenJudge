#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int T,N;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        scanf("%d",&N);
        char str[1001];
        getchar();
        for(int j=0; j<N; j++)
        {
            gets(str);
            putchar(str[0]);
        }
        printf("\n");
    }
}

/**************************************************************
	Problem: 1653
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

