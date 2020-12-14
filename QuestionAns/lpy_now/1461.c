#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    int num[11000],i;
    for(i=1;i<=N;++i){
        scanf("%d",&num[i]);
    }
    int check;
    while(scanf("%d",&check)!=EOF){
        if(check>N || check<-N){
            printf("OUT OF RANGE\n");
            continue;
        }
        if(check>0){
            printf("%d\n",num[check]);
        }
        else{
            printf("%d\n",num[N+check+1]);
        }

    }
    return 0;
}

/**************************************************************
	Problem: 1461
	User: 201901061011
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

