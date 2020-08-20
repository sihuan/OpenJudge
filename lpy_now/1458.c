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
        if(check>N){
            printf("OUT OF RANGE\n");
            continue;
        }
        printf("%d\n",num[check]);
    }
    return 0;
}

/**************************************************************
	Problem: 1458
	User: 201901061011
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

