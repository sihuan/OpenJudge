#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long int n;
    scanf("%llu",&n);
    if(n%2==0)
        printf("%llu",n/2*(n+1));
    else
         printf("%llu",(n+1)/2*n);
    return 0;
}

/**************************************************************
	Problem: 1015
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

