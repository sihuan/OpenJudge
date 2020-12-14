#include<stdio.h>

int main(){
    int num[1100];
    int T;
    scanf("%d",&T);
    while(T--){
        int N;
        scanf("%d",&N);
        int i;
        for(i=1;i<=N;++i){
            scanf("%d",&num[i]);
        }
        int n,m;
        scanf("%d%d",&n,&m);
        for(i=1;i<=N;++i){
            printf("%2d",num[i]);
            if(i%m==0){
                printf("\n");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

/**************************************************************
	Problem: 1770
	User: 201901061011
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

