#include <stdio.h>

int input(int a[])
{
    int i = 0, t;
    while (scanf("%d", &t) && t != 0) {
        a[i] = t;
        i++;
    }
    return i;
}

int main()
{
    int a[1001], b[1001];
    int jh1 = input(a);
    int jh2 = input(b);
    int i, j, s = 0, c;
    for (i = 0; i < jh1; i++)
        for (j = 0; j < jh2; j++)
            if (a[i] == b[j]) {
                s++;
                break;
            }
    if (jh1 > jh2)
        c = jh1;
    else
        c = jh2;
    if (c == 0)
        puts("100.00%");
    else
        printf("%0.2lf%%", ((1.0) * s) / c * 100.0);
}
/**************************************************************
	Problem: 1935
	User: 201901060610
	Language: C
	Result: Accepted
	Time:16 ms
	Memory:748 kb
****************************************************************/

