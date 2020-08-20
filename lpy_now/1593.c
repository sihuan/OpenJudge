#include<stdio.h>

int main(){
    int num[110][110];
    int K;
    int i;
    scanf("%d",&K);
    for(i=0;i<K;++i){
        int n,m;
        scanf("%d%d",&n,&m);
        int j,k;
        for(j=1;j<=n;++j){
            for(k=1;k<=m;++k){
                scanf("%d",&num[j][k]);
            }
        }
        printf("case %d:",i+1);
        int tot;
        for(j=1;j<=m;++j){
            tot=0;
            for(k=1;k<=n;++k){
                tot+=num[k][j];
            }
            if(j!=1){
                printf(" ");
            }
            printf("%lg",(double)tot/(double)(n));
        }
        printf("\n");
    }
    return 0;
}

/**************************************************************
	Problem: 1593
	User: 201901061011
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:748 kb
****************************************************************/

