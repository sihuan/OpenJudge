#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int n;
    int i, j, l;
    int a, b;
    int f=0;
    char ch[10005];
    char toScrt(char, int);

    scanf("%d", &n);
    while (n--) {
        scanf("%d%d", &a, &b);
        getchar();

        if (f)
            putchar('\n');
        else
            f=1;

        while (a--) {
            gets(ch);
            int len=strlen(ch);
            l=0;
            for (i=0; i<len; i++) {
                if (isalpha(ch[i])) {
                    l++;
                }
            }
            printf("%d ", l);
            for (i=0; i<len; i++) {
                if (isalpha(ch[i])) {
                    putchar(toScrt(toupper(ch[i]), b));
                }
            }
            putchar('\n');
        }
    }

    return 0;
}

char toScrt(char c, int a)
{
    int asc;

    asc=c-'A'+(a>0?a%26:a%26+26)+1;
    /*if (asc<=0)
        asc=26-asc;*/
    if (asc%26==0)
        asc=26;
    else
        asc%=26;

    return 'A'+asc-1;
}
/*
abcdefghijklmnopqrstuvwxyz
*/

/**************************************************************
	Problem: 1062
	User: 201901060401
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

