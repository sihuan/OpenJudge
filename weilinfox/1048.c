#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int sta[101][101];
    int i, j;
    int x, y, px, py;
    int n;
    int f=0;

    while (scanf("%d", &n)==1) {
        memset(sta, 0, sizeof sta);
        for (i=1; i<=n*n; i++) {
            if (i==1) {
                sta[0][n/2]=i;
                x=n/2;
                y=0;
            } else {
                if (sta[y][x]>0 || (px==n-1 && py==0)) {
                    x=px;
                    y=py+1;
                    sta[y][x]=i;
                } else
                    sta[y][x]=i;
            }
            px=x++;
            py=y--;
            if (x==n)
                x=0;
            if (y<0)
                y=n-1;

        }

        if (f)
            putchar('\n');
        else
            f=1;
        int flag;
        for (i=0; i<n; i++) {
            flag=0;
            for (j=0; j<n; j++) {
                if (flag)
                    printf(" %d", sta[i][j]);
                else {
                    flag=1;
                    printf("%d", sta[i][j]);
                }
            }
            putchar('\n');
        }
    }


    return 0;
}

/**************************************************************
	Problem: 1048
	User: 201901060401
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

