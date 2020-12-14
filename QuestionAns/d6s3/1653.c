#include <stdio.h>

int main()
{
    int T, N, i;
    char st[100][1001];
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &N);
        getchar();
        for (i = 0; i < N; i++) 
            gets(st[i]);
        for (i = 0; i < N; i++)
            printf("%c", st[i][0]);
        printf("\n");
    }
}
/**************************************************************
	Problem: 1653
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:772 kb
****************************************************************/

