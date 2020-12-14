#include<stdio.h>

int main(){
    int N;
    int i;
    scanf("%d",&N);
    for(i=0;i<N;++i){
        int n,m;
        scanf("%d%d",&n,&m);
        if(m%2==1){
            printf("no result\n");
            continue;
        }
        int a=2*n-m/2,b=m/2-n;
        if(a<0 || b<0){
            printf("no result\n");
            continue;
        }
        else{
            printf("%d %d\n",a,b);
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1763
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

