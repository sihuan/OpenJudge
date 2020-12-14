#include <stdio.h>
#include <string.h>

int get_matrix(int ma[][101], int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &ma[i][j]);
}

int mul_matrix(int pr[][101], int m1[][101], int m2[][101], int m, int n, int q)
{
    int i, j, k;
    for (i = 0; i < m; i++)
        for (j = 0; j < q; j++) {
            pr[i][j] = 0;
            for (k = 0; k < n; k++)
                pr[i][j] += m1[i][k] * m2[k][j];
        }
}

int put_matrix(int ma[][101], int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            if (j == 0)
                printf("%d", ma[i][j]);
            else
                printf(" %d", ma[i][j]);
        printf("\n");
    }
}

int main()
{
    int m, n, i = 0, j, mp, np;
    int m1[101][101], m2[101][101], pr[101][101];
    scanf("%d %d", &m, &n);
    if (m != 0 && n != 0) {
        get_matrix(m1, m, n);
        mp = m;
        np = n;
        i++;
    } else
        return 0;
    while (scanf("%d %d", &m, &n) && !(m == 0 && n == 0)) {
        if (i != 1)
            printf("\n");
        i++;
        if (np == m) {
            get_matrix(m2, m, n);
            mul_matrix(pr, m1, m2, mp, m, n);
            memcpy(m1,pr,sizeof pr);
            m = mp;
            put_matrix(m1,m,n);
        }
        else
        {
            get_matrix(m1,m,n);
			printf("Not satisfied the definition of matrix multiplication!\n");
        }
        mp = m;
        np = n;
    }
}
/**************************************************************
	Problem: 1055
	User: 201901060610
	Language: C
	Result: Accepted
	Time:16 ms
	Memory:796 kb
****************************************************************/

