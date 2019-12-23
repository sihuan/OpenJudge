#include <ctype.h>
#include <stdio.h>

void prtsj(int n)
{
    n *= 4;
    while (n--)
        putchar(' ');
}

int main()
{
    char ch, chp = 0;
    int sj = 0, hs = 0;
    while ((ch = getchar()) != EOF) {
        if (isspace(ch))
            continue;
        if (ch == '{') {
            if (sj)
                putchar(' ');
            putchar('{');
            putchar('\n');
            sj++;
            hs = 1;
        } else if (ch == ';') {
            putchar(';');
            putchar('\n');
            hs = 1;
        } else if (ch == ',') {
            putchar(',');
            putchar(' ');
        } else if (ch == '}') {
            sj--;
            prtsj(sj);
            putchar('}');
            hs = 0;
        } else {
            if (hs) {
                prtsj(sj);
                hs = 0;
            }
            putchar(ch);
        }
        chp = ch;
    }
}
/**************************************************************
	Problem: 1070
	User: 201901060610
	Language: C
	Result: Accepted
	Time:32 ms
	Memory:748 kb
****************************************************************/

