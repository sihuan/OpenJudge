#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char st[30001], stp[30001], ms[50];
    int i, j, k, h, f;
    scanf("%s", st);
    while (scanf("%s", stp) != EOF) {
        i = j = k = 0;
        memset(ms, 0, sizeof ms);
        //while (st[i] != '\0' && stp[j] != '\0') {
        while (st[i] != '\0') {
            if (st[i] != stp[j]) {
                f = 0;
                for (h = 0; h < k; h++)
                    if (ms[h] == toupper(st[i])) {
                        f = 1;
                        break;
                    }
                if (!f)
                    ms[k++] = toupper(st[i++]);
                else
                    i++;
                continue;
            }
            i++, j++;
        }
        printf("%s\n", ms);
    }
}
/**************************************************************
	Problem: 2047
	User: 201901060610
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

