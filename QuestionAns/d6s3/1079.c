#include <stdio.h>

int main()
{
    int n, a, b, c;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d %d %d", &a, &b, &c);
        if (a + b > c && a + c > b && b + c > a) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}
/**************************************************************
	Problem: 1079
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

