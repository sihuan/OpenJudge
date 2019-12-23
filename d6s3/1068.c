#include <stdio.h>
#include <string.h>

char ys[10][6] = { "14041", "03030", "13121", "13131", "04130", "12131", "12141", "13030", "14141", "14131" };

void prth(char sz[], int s, int h)
{
    int len = strlen(sz);
    for (int i = 0; i < len; i++) {
        if (i != 0)
            putchar(' ');
        switch (ys[sz[i] - 48][h - 1]) {
        case '0':
            for (int j = 0; j < s + 2; j++)
                putchar(' ');
            break;
        case '1':
            putchar(' ');
            for (int j = 0; j < s; j++)
                putchar('-');
            putchar(' ');
            break;
        case '2':
            putchar('|');
            for (int j = 0; j < s + 1; j++)
                putchar(' ');
            break;
        case '3':
            for (int j = 0; j < s + 1; j++)
                putchar(' ');
            putchar('|');
            break;
        case '4':
            putchar('|');
            for (int j = 0; j < s; j++)
                putchar(' ');
            putchar('|');
            break;
        }
    }
    putchar('\n');
}

int main()
{
    int s, i, f = 0;
    char n[10];
    while (scanf("%d %s", &s, n) != EOF) {
        if (s == 0 && strcmp(n, "0") == 0)
            break;
        if (f++ != 0)
            putchar('\n');
        prth(n, s, 1);
        for (i = 0; i < s; i++)
            prth(n, s, 2);
        prth(n, s, 3);
        for (i = 0; i < s; i++)
            prth(n, s, 4);
        prth(n, s, 5);
    }
}
/**************************************************************
	Problem: 1068
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

