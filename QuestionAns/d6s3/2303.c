#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int* ar = (int*)malloc(sizeof(int) * 10000000);
    memset(ar, 0, sizeof(int) * 10000000);
    int h, k;
    long long i, j;
    for (i = 2; i <= sqrt(10000000); i++)
        if (ar[i] == 0)
            for (j = 2 * i; j < 10000000; j += i)
                ar[j] = 1;
    while (scanf("%d", &k) != EOF) {
        h = 0, i = 2;
        while (1) {
            if (ar[i] == 0)
                h++;
            if (h == k) {
                printf("%d\n", i);
                break;
            }
            i++;
        }
    }
}
/**************************************************************
	Problem: 2303
	User: 201901060610
	Language: C
	Result: Accepted
	Time:6784 ms
	Memory:39812 kb
****************************************************************/

