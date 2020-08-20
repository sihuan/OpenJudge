#include<stdio.h>

int main(){
    int n,i,j;
    while(scanf("%d",&n)!=EOF){
        for(i=1;i<=n;++i){
            for(j=1;j<=n;++j){
                if(i!=j){
                    printf("0");
                }
                if(i==j){
                    printf("1");
                }
                if(j==n){
                    printf("\n");
                }
                if(j!=n){
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}

/**************************************************************
	Problem: 1506
	User: 201901061011
	Language: C
	Result: Accepted
	Time:68 ms
	Memory:748 kb
****************************************************************/

