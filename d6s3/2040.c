#include <stdio.h>

int main()
{
    long long a;
    scanf("%lld", &a);
    printf("%dK\n", a / 1024);
    printf("%.2lfM\n", a / 1024.0 / 1024.0);
    printf("%.2lfG\n", a / 1024.0 / 1024.0 / 1024.0);
}
/**************************************************************
	Problem: 2040
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

