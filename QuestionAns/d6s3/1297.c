#include <stdio.h>

int main()
{
    int i, a;
    int y[4];
    char sz;
    while (scanf("%d", &a) != EOF) {
        while (1) {
            a += 1;
            y[0] = a / 1000;
            y[1] = a % 1000 / 100;
            y[2] = a % 1000 % 100 / 10;
            y[3] = a % 1000 % 100 % 10;
            if (y[0] != y[1] && y[0] != y[2] && y[0] != y[3] && y[1] != y[2] && y[1] != y[3] && y[2] != y[3]) {
                printf("%d\n", a);
                break;
            }
        }
    }
}
/**************************************************************
	Problem: 1297
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

