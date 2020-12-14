#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int num[11000];
    int T,n,m,i;
    scanf("%d",&T);
    for(i=0;i<T;++i){
        memset(num,0,sizeof(num));
        int j;
        scanf("%d",&n);
        int maxx=0;
        for(j=0;j<n;++j){
            scanf("%d",&m);
            ++num[m];
            if(m>maxx){
                maxx=m;
            }
        }
        int max=0;
        for(j=1;j<=maxx;++j){
            if(num[j]>max){
                max=num[j];
            }
        }
        printf("%d",max);
        for(j=1;j<=maxx;++j){
            if(num[j]==max){
                printf(" %d",j);
            }
        }
        if(i<T-1){
            printf("\n");
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1767
	User: 201901061011
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

