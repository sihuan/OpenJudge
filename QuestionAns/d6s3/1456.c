#include <math.h>
#include <stdio.h>

int main()
{
    int n;
    int a[10002] = { 0 };
    int i, j, b = 0;
    scanf("%d", &n);
    a[0] = a[1] = a[2] = 1;
    for (i = 3; i <= 10001; i++) {
        for (j = 2; j <= sqrt(i); j++) {
            if (i % j == 0)
                a[i] = 1;
        }
    }
    for (i = 3; i <= n / 2; i++) {
        for (j = n; j >= n / 2; j--) {
            if (i + j == n && a[i] == 0 && a[j] == 0)
                if (b == 0){
                    printf("%d + %d = %d", i, j, n);
                    b++;
                }
                else
                    printf("\n%d + %d = %d", i, j, n);
        }
    }
}
/**************************************************************
	Problem: 1456
	User: 201901060610
	Language: C
	Result: Accepted
	Time:120 ms
	Memory:756 kb
****************************************************************/

