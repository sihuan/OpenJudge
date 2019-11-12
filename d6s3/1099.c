#include <stdio.h>
int main()
{
    int n, i, a, j, k, h;
    int ar[1000];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &ar[i]);
    for (j = 1; j < n; j++) {
        a = ar[j];
        k = j - 1;
        while ((k >= 0) && (ar[k] > a)) {
            ar[k + 1] = ar[k];
            k--;
        }
        ar[k + 1] = a;
    }
    for (h = 0; h < n; h++) {
        if (h == 0)
            printf("%d", ar[h]);
        else
            printf(" %d", ar[h]);
    }
}
/**************************************************************
	Problem: 1099
	User: 201901060610
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

