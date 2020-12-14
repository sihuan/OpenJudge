#include<stdio.h>
int main()
{
    unsigned long long n,s=0;
    scanf("%llu",&n);
    if (n%2 == 0)
        s = (n/2)*(n+1);
    else
        s = ((n+1)/2)*n;
    printf("%llu",s);
}

/**************************************************************
	Problem: 1015
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

