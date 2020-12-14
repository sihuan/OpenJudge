#include <stdio.h>
int main()
{
    int a, i, j;
    int ar[100];
    while (scanf("%d", &a) != EOF) {
        if (a == 0) {
            printf("0\n");
            continue;
        }
        i = 0;
        while (a != 0) {
            if (a % 2 == 1)
                ar[i] = 1;
            else
                ar[i] = 0;
            a /= 2;
            i++;
        }
        for (j = i - 1; j >= 0; j--)
            if (j==0)
                printf("%d\n", ar[j]);
            else
                printf("%d",ar[j]);
    }
}
/**************************************************************
	Problem: 1039
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

