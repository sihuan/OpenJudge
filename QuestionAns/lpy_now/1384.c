#include<stdio.h>

long long sum(long n){
	if(n==1 || n==0){
		return 1;
	}
	return n*sum(n-1);
}

int main(){
    long long n;
    scanf("%lld",&n);
    printf("%lld",sum(n));
    return 0;
}

/**************************************************************
	Problem: 1384
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

