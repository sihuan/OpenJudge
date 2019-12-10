#include <stdio.h>
#include <string.h>
int main()
{
    char fi[12], se[12];
    int jh[12] = { 0 };
    int i, s, j, a = 0;
    while (scanf("%s %s", &fi, &se) != EOF) {
        s = 0;
        memset(jh, 0, sizeof jh);
        for (i = strlen(fi) - 1, j = 11; i >= 0; i--, j--)
            jh[j] += (fi[i] - '0');
        for (i = strlen(se) - 1, j = 11; i >= 0; i--, j--)
            jh[j] += (se[i] - '0');
        for (i = 11; i >= 0; i--)
            if (jh[i] >= 10) {
                s += 1;
                if (i > 0)
                    jh[i - 1] += 1;
            }
        if (a == 0) {
            printf("%d", s);
            a++;
        } else
            printf("\n%d", s);
    }
}
/**************************************************************
	Problem: 1172
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

