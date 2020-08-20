#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define maxn 50+10

int a[maxn][maxn];

void putarray( int s[maxn][maxn], int n )
{
    for( int i = 0; i < n; i++)
    {
        for( int j = 0; j < n; j++)
        {
            if( j != 0 )
                printf(" ");
            printf("%d", a[i][j]);
        }
        puts("");
    }
}

int main()
{
    int n, x, y, t = 0;
    int num = 0;
    while( ~scanf("%d", &n) )
    {
        if( ++num != 1 )
            puts("");
        memset(a, 0, sizeof(a));
        x = 0, y = n-1;
        t = a[x][y] = 1;
        while(t < n*n)
        {
            while(x + 1 < n && !a[x+1][y])
                a[++x][y] = ++t;
            while(y - 1 >= 0 && !a[x][y-1])
                a[x][--y] = ++t;
            while(x - 1 >= 0 && !a[x-1][y])
                a[--x][y] = ++t;
            while(y + 1 < n && !a[x][y+1])
                a[x][++y] = ++t;
        }

        putarray(a,n);
    }
    return 0;
}
/**************************************************************
	Problem: 1184
	User: 201901061011
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:760 kb
****************************************************************/

