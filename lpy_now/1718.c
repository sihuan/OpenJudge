#include<stdio.h>

int fibo(int n){
	if(n==0){
		return 0;
	}
	if(n==2 || n==1){
		return 1;
	}
	else{
		return fibo(n-1)+fibo(n-2);
	}
}

int main(){
	int n,m,i;
	scanf("%d",&m);
	for(i=0;i<m;++i){
		scanf("%d",&n);
		printf("%d\n",fibo(n));
	}
	return 0;
}

/**************************************************************
	Problem: 1718
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

