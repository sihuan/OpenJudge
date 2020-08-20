#include<stdio.h>

int C(int n,int m){
    if(n==m || m==0){
        return 1;
    }
    if(n<m){
        return 0;
    }
    return C(n-1,m-1)+C(n-1,m);
}

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    printf("%d",C(n,m));
    return 0;
}

/**************************************************************
	Problem: 2038
	User: 201901061011
	Language: C
	Result: Accepted
	Time:164 ms
	Memory:748 kb
****************************************************************/

