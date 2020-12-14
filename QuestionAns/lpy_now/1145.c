#include<stdio.h>

int main(){
    int N,i,j,sum,a,b;
    scanf("%d",&N);
    for(i=0;i<N;++i){
    	scanf("%d%d",&a,&b);
    	sum=0;
    	for(j=a;j<=b;++j){
    		sum+=j;
		}
		printf("case %d:sum=%d.\n",i+1,sum);
	}
    return 0;
}
/**************************************************************
	Problem: 1145
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

