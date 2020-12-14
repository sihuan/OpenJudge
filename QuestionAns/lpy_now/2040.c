#include<stdio.h>

int main(){
    long long n;
    scanf("%lld",&n);
    printf("%lldK\n",n/1024);
    printf("%.2lfM\n%.2lfG",(double)n/1024/1024,(double)n/1024/1024/1024);
    return 0;
}

/**************************************************************
	Problem: 2040
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

