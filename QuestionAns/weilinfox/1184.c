#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int sta[51][51];
    int n;
    int i, j, k;
    int flag=0;

    while (scanf("%d", &n)==1) {
        i=0;
        k=1;
        while (i<=n/2) {
            for (j=i; j<n-i; j++) {
                sta[j][n-1-i]=k++;
            }
            for (j=n-2-i; j>=i; j--)
                sta[n-i-1][j]=k++;
            for (j=n-2-i; j>=i; j--)
                sta[j][i]=k++;
            for (j=i+1; j<=n-2-i; j++)
                sta[i][j]=k++;
            i++;
        }

        if (flag)
            putchar('\n');
        else
            flag=1;

        int f;
        for (i=0; i<n; i++) {
            f=1;
            for (j=0; j<n; j++) {
                if (f) {
                    printf("%d", sta[i][j]);
                    f=0;
                } else {
                    printf(" %d", sta[i][j]);
                }
            }
            putchar('\n');
        }
    }

    return 0;
}

/**************************************************************
	Problem: 1184
	User: 201901060401
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

