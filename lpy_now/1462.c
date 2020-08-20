#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    int num[11000],i,ans[11000];
    for(i=1;i<=N;++i){
        scanf("%d",&num[i]);
    }
    int check;
    while(scanf("%d",&check)!=EOF){
        int j=1;
        for(i=1;i<=N;++i){
            if(check==num[i]){
                ans[j]=i;
                ++j;
            }
        }
        if(j!=1){
            for(i=1;i<j-1;++i){
                printf("%d ",ans[i]);
            }
            printf("%d\n",ans[j-1]);
        }
        else{
            printf("NOT FOUND\n");
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1462
	User: 201901061011
	Language: C
	Result: Accepted
	Time:44 ms
	Memory:760 kb
****************************************************************/

