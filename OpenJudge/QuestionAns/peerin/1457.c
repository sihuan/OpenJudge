#include <stdio.h>

void prsp(int n)
{
    int i;
    for (i = 1; i <= n; i++) {
        printf(" ");
    }
}

void prsz(int n)
{
    int i;
    for (i = 1; i <= n; i++) {
        printf("%d", i);
    }
    for (i -= 2; i >= 1; i--) {
        printf("%d", i);
    }
}

int main()
{
    int i, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        prsp(n - i);
        prsz(i);
        printf("\n");
    }
    for (i -= 2; i >= 1; i--) {
        prsp(n - i);
        prsz(i);
        printf("\n");
    }
}
/**************************************************************
	Problem: 1457
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/


/**************************************************************
	Problem: 1457
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

