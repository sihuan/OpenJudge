#include <stdio.h>

int main()
{
    int s, t;
    char a;
    while (scanf("%d", &s) != EOF) {
        while (scanf("%c", &a)) {
            if (a == '+') {
                scanf("%d", &t);
                s += t;
            } else if (a == '-') {
                scanf("%d", &t);
                s -= t;
            } else if (a == '=') {
                printf("%d\n", s);
                break;
            }
        }
    }
}
/**************************************************************
	Problem: 2037
	User: 201901060610
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

