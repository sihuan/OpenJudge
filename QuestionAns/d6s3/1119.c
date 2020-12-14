#include <stdio.h>
int main()
{
    int n, max, min, a;
    while (scanf("%d", &n) && n != 0) {
        scanf("%d", &a);
        max = a, min = a;
        for (int i = 2; i <= n; i++) {
            scanf("%d", &a);
            if (a > max)
                max = a;
            else if (a < min)
                min = a;
        }
        printf("%d\n", (max - min) * 2);
    }
}
/**************************************************************
	Problem: 1119
	User: 201901060610
	Language: C
	Result: Accepted
	Time:44 ms
	Memory:748 kb
****************************************************************/

