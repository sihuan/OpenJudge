#include<stdio.h>
int main()
{
    unsigned long long n;
    scanf("%llu",&n);
    n%2==0?printf("%llu",n/2*(n-1)+n):printf("%llu",(n+1)/2*n);

    return 0;
}
/**************************************************************
	Problem: 1015
	User: 201801020908
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

