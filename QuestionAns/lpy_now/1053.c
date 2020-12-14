#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    int i;
    int m,n;
    int num[110][110];
    for(i=0;i<N;++i){
        scanf("%d%d",&n,&m);
        int j,k;
        for(j=0;j<n;++j){
            for(k=0;k<m;++k){
                scanf("%d",&num[j][k]);
            }
        }
        for(j=0;j<m;++j){
            for(k=0;k<n;++k){
                printf("%d",num[k][j]);
                if(k==n-1){
                    printf("\n");
                }
                else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}

/**************************************************************
	Problem: 1053
	User: 201901061011
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

