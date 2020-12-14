#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char st[1001];
    char stp[1001];
    int i, j, k, f;
    while (gets(st) != NULL) {
        for (i = 0, j = 0; i < strlen(st); i++)
            if (isalnum(st[i]))
                stp[j++] = toupper(st[i]);
        j--;
        f = 1;
        for (i = 0; i <= j; i++, j--)
            if (stp[i] != stp[j]) {
                f = 0;
                break;
            }
        if (f)
            printf("Yes.\n");
        else
            printf("No.\n");
    }
}
/**************************************************************
	Problem: 1061
	User: 201901060610
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

