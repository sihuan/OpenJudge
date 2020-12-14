#include <stdio.h>
#include <string.h>

int main()
{
    char st[1001][101], tp[101];
    int N, i, f;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
        scanf("%s", &st[i]);
    while (scanf("%s", &tp) != EOF) {
        f = 1;
        for (i = 0; i < N; i++)
            if (strcmp(st[i], tp) == 0) {
                printf("Yes\n");
                f = 0;
                break;
            }
        if (f)
            printf("No\n");
    }
}
/**************************************************************
	Problem: 2043
	User: 201901060610
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:772 kb
****************************************************************/

