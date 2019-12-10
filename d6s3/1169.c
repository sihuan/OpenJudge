#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char st[1001];
    int i, j, l, s;
    while (gets(st) != NULL) {
        l = strlen(st);
        s = 0;
        for (i = 0; i < l; i++)
            if (!isspace(st[i]) && !ispunct(st[i])) {
                s++;
                for (j = i; j < l; j++)
                    if (!isspace(st[j]) && !ispunct(st[j]))
                        i++;
                    else
                        break;
            }
        printf("%d\n", s);
    }
}
/**************************************************************
	Problem: 1169
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

