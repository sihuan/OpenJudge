#include <ctype.h>
#include <stdio.h>
#include <string.h>

int isip(char st[])
{
    int i, l;
    int s = 0, c = 0, cp = 0;
    l = strlen(st);
    for (i = 0; i < l; i++) {
        if (!(isdigit(st[i]) || st[i] == '.'))
            return 0;
    }
    for (i = 0; i < l; i++)
        if (isdigit(st[i])) {
            c++;
            s = s * 10 + (st[i] - '0');
        } else if (st[i] == '.') {
            if (s > 255 || s < 0 || c > 3 || c < 1)
                return 0;
            c = 0;
            s = 0;
            cp++;
        }
    if (cp != 3)
        return 0;
    return 1;
}

int main()
{
    char st[101];
    while (gets(st) != NULL) {
        if (isip(st))
            printf("YES\n");
        else
            printf("NO\n");
    }
}
/**************************************************************
	Problem: 1301
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

