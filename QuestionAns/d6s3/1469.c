#include <stdio.h>
int main()
{
    int n, i, a, j, m = 1;
    int ar[200001]={0};
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a);
        ar[a] += 1;
    }
    for (j = 0; j < 200001; j++) {
        if (ar[j] > m)
            m = ar[j];
    }
    printf("%d\n", m);
}
/**************************************************************
	Problem: 1469
	User: 201901060610
	Language: C
	Result: Accepted
	Time:64 ms
	Memory:1456 kb
****************************************************************/

