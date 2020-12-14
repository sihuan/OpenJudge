#include <stdio.h>

int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    while (n / 2 != 0) {
        sum++;
        n /= 2;
    }
    printf("%d", sum+1);
}
/**************************************************************
	Problem: 2299
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

