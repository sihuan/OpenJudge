#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int a[10][7]={{1, 1, 1, 0, 1, 1, 1},
                {0, 0, 1, 0, 0, 1},
                {1, 0, 1, 1, 1, 0, 1},
                {1, 0, 1, 1, 0, 1, 1},
                {0, 1, 1, 1, 0, 1},/*4*/
                {1, 1, 0, 1, 0, 1, 1},
                {1, 1, 0, 1, 1, 1, 1},
                {1, 0, 1, 0, 0, 1},
                {1, 1, 1, 1, 1, 1, 1},
                {1, 1, 1, 1, 0, 1, 1},/*9*/};
int main()
{
    int n;
    int i, j, k;
    int layer;
    int f=0;
    char ch[15];

    while (scanf("%d%s", &n, ch)==2 && (n!=0
           || (strlen(ch)!=1 || ch[0]!='0'))) {
        if (f)
            putchar('\n');
        else
            f=1;
        for (i=0; i<strlen(ch); i++) {
            if (i!=0)
                putchar(' ');
            if (a[ch[i]-'0'][0]) {
                putchar(' ');
                for (j=0; j<n; j++) {
                    putchar('-');
                }
                putchar(' ');
            } else {
                for (j=0; j<n+2; j++) {
                    putchar(' ');
                }
            }
        }
        putchar('\n');

        for (k=0; k<n; k++) {
            for (i=0; i<strlen(ch); i++) {
                if (i!=0)
                    putchar(' ');

                if (a[ch[i]-'0'][1])
                    putchar('|');
                else
                    putchar(' ');

                for (j=0; j<n; j++)
                    putchar(' ');

                if (a[ch[i]-'0'][2])
                    putchar('|');
                else
                    putchar(' ');
            }
            putchar('\n');
        }

        for (i=0; i<strlen(ch); i++) {
            if (i!=0)
                putchar(' ');
            if (a[ch[i]-'0'][3]) {
                putchar(' ');
                for (j=0; j<n; j++) {
                    putchar('-');
                }
                putchar(' ');
            } else {
                for (j=0; j<n+2; j++) {
                    putchar(' ');
                }
            }
        }
        putchar('\n');

        for (k=0; k<n; k++) {
            for (i=0; i<strlen(ch); i++) {
                if (i!=0)
                    putchar(' ');

                if (a[ch[i]-'0'][4])
                    putchar('|');
                else
                    putchar(' ');

                for (j=0; j<n; j++)
                    putchar(' ');

                if (a[ch[i]-'0'][5])
                    putchar('|');
                else
                    putchar(' ');
            }
            putchar('\n');
        }

        for (i=0; i<strlen(ch); i++) {
            if (i!=0)
                putchar(' ');
            if (a[ch[i]-'0'][6]) {
                putchar(' ');
                for (j=0; j<n; j++) {
                    putchar('-');
                }
                putchar(' ');
            } else {
                for (j=0; j<n+2; j++) {
                    putchar(' ');
                }
            }
        }
        putchar('\n');
    }

    return 0;
}

/**************************************************************
	Problem: 1068
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

