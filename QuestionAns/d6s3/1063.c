#include <ctype.h>
#include <stdio.h>
#include <string.h>

int t = 0;
char st[200], slc[500];

int checkdx()
{
    int i = 0;
    while (st[i++] != '\0')
        if (!isupper(st[i - 1]))
            return 0;
    return 1;
}

int getslc()
{
    int i, j = 0, k = 0;
    char c;
    for (i = 0;; ++i) {
        scanf("%c", &c);
        if (i == 0 && c == '(') {
            continue;
            getchar();
        } else if (i == 0 && c != '(')
            return 0;
        else if (c == ')') {
            slc[k] = 0;
            break;
        } else if (i && isupper(c)) {
            if (c == st[j++])
                slc[k++] = c;
            else
                break;
        } else {
            slc[k++] = c;
        }
    }
    if (t == 0) {
        printf("Abbreviation ==> Full Name\n");
        t++;
    }
    int u = 10 - strlen(st) - t / 10;
    printf("%d:", t++);
    while (u--)
        putchar(' ');
    printf("%s ==> ", st);
    puts(slc);
    return 0;
}

int main()
{
    while (scanf("%s", st) != EOF)
        if (checkdx()) {
            getchar();
            getslc();
        }
    if (t == 0) {
        printf("There is no abbreviations in this text.\n");
    }
    return 0;
}
/**************************************************************
	Problem: 1063
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

