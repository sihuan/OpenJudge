#include<stdio.h>

int Ackermann(int m,int n){
	if(m==0){
		return n+1;
	}
	else if(m>0 && n==0){
		return Ackermann(m-1,1);
	}
	else if(m>0 && n>0){
		return Ackermann(m-1,Ackermann(m,n-1));
	}
}

int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    printf("A(%d, %d) = %d",m,n,Ackermann(m,n));
    return 0;
}

/**************************************************************
	Problem: 1512
	User: 201901061011
	Language: C
	Result: Accepted
	Time:1180 ms
	Memory:1292 kb
****************************************************************/

