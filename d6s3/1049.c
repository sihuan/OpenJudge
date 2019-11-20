#include <stdio.h>

int ar[1000000];

int zq(int x)
{
    int j = 0, i, xp = x;
    if (ar[x] != 0)
        return ar[x];
    while (1) {
        j++;
        if (x == 1) {
            ar[xp] = j;
            return j;
        }
        if (x % 2 == 1)
            x = x * 3 + 1;
        else
            x = x / 2;
    }
}

int main()
{
    int a, b, i, m, c, t, ap, bp;
    while (scanf("%d %d", &a, &b) != EOF) {
        m = 0;
        ap = a;
        bp = b;
        if (a > b) {
            t = a;
            a = b;
            b = t;
        }
        for (i = a; i <= b; i++) {
            c = zq(i);
            if (c > m)
                m = c;
        }
        printf("%d %d %d\n", ap, bp, m);
    }
}
/**************************************************************
	Problem: 1049
	User: 201901060610
	Language: C
	Result: Accepted
	Time:272 ms
	Memory:4652 kb
****************************************************************/

