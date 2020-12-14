#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int m, n, k, i, j, f = 0;
    char st[10001], stp[10001];
    char s;
    scanf("%d", &m);
    while (m--) {
        scanf("%d %d", &n, &k);
        getchar();
        if (f != 0)
            putchar('\n');
        f++;
        while (n--) {
            gets(st);
            for (i = 0, j = 0; i < strlen(st); i++) {
                if (isalpha(st[i])) {
                    s = toupper(st[i]) + k;
                    if (s > 'Z')
                        s -= 26;
                    else if (s < 'A')
                        s += 26;
                    stp[j++] = s;
                }
            }
            stp[j] = '\0';
            printf("%d %s\n", j, stp);
        }
    }
}
/**************************************************************
	Problem: 1062
	User: 201901060610
	Language: C
	Result: Accepted
	Time:16 ms
	Memory:748 kb
****************************************************************/

