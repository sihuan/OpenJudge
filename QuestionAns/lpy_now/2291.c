#include<stdio.h>

int main(){
    long long n,k;
    scanf("%lld%lld",&n,&k);
    int tot=0;
    if(n==0 && k==0){
        printf("1");
        return 0;
    }
    while(n>=1){
        int a=n%10;
        n/=10;
        if(a==k){
            ++tot;
        }
    }
    printf("%d",tot);
    return 0;
}

/**************************************************************
	Problem: 2291
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

