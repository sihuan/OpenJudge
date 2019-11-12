#include <stdio.h>
int main()
{
    int m, i, j = 1, s = 0, a, b, c;
    while (scanf("%d", &m) != EOF) {
        for (i = 100; i < 1000; i++) {
            if (i % m == 0) {
                a = i / 100;
                b = (i % 100) / 10;
                c = (i % 100) % 10;
                if (a != b && a != c && b != c) {
                    s += i;
                }
            }
        }
        printf("case %d:%d\n", j, s);
        j++;
        s = 0;
    }
}
/**************************************************************
	Problem: 1207
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

