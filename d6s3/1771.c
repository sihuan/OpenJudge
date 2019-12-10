#include <math.h>
#include <stdio.h>
#include <string.h>
#define MAX_SH 100000

int ar[MAX_SH + 1];
//数组中0为素数，1不为素数

int ispr(int x)
{
    int i;
    if (x <= MAX_SH) {
        if (ar[x] == 0)
            return 1;
        return 0;
    } else {
        for (i = 2; i <= sqrt(x); i++)
            if (x % i == 0)
                return 0;
        return 1;
    }
}

int main()
{
    int T, n, f, jp;
    long long i, j;
    scanf("%d", &T);
    ar[0] = ar[1] = 1;
    for (i = 2; i <= sqrt(MAX_SH); i++)
        if (ar[i] == 0)
            for (j = 2 * i; j < MAX_SH; j += i)
                ar[j] = 1;
    while (T--) {
        scanf("%d", &n);
        printf("%d=", n);
        i = 2;
        jp = 0;
        if (ispr(n))
            ;
        else
            while (!ispr(n))
                for (i = 2; i <= n; i++)
                    if (ar[i] == 0 && n % i == 0) {
                        n /= i;
                        printf("%d*", i);
                        break;
                    }
        printf("%d\n", n);
    }
}
/**************************************************************
	Problem: 1771
	User: 201901060610
	Language: C
	Result: Accepted
	Time:444 ms
	Memory:1148 kb
****************************************************************/

