#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char st[1000];
    int i, j;
    char ar[17][5] = { { "0000" }, { "0001" }, { "0010" }, { "0011" }, { "0100" }, { "0101" }, { "0110" }, { "0111" }, { "1000" }, { "1001" }, { "1010" }, { "1011" }, { "1100" }, { "1101" }, { "1110" }, { "1111" } };
    while (gets(st)) {
        for (i = 0; i < strlen(st); i++) {
            if (isdigit(st[i]))
                printf("%s", ar[st[i] - 48]);
            else if (isupper(st[i]))
                printf("%s", ar[j = st[i] - 55]);
        }
        printf("\n");
    }
}
/**************************************************************
	Problem: 1637
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

