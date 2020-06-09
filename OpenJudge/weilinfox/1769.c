
#include<stdio.h>

int main()
{
    int n;
    unsigned long long fun (int);
        scanf("%d", &n);

        printf("%llu", fun(n));

        return 0;
}

unsigned long long fun (int n)
{
    unsigned long long fun (int);
    if (n==1)
        return 1;
    else
        return fun(n-1)*2+1;
}


/**************************************************************
	Problem: 1769
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

