#include <stdio.h>
int main()
{
    long long int a;
    while (scanf("%lld", &a) != EOF) {
        if (a == 1)
            printf("471\n");
        else
            printf("%lld471\n", a - 1);
    }
}
/**************************************************************
	Problem: 1047
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

