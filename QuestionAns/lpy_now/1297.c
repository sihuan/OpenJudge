#include<stdio.h>
#include<string.h>

int main(){
    int n;
    int i;
    int check[10];
    while(scanf("%d",&n)!=EOF){
        for(i=n+1;i<=9999;++i){
            memset(check,0,sizeof(check));
            int d=i;
            check[d%10]=1;
            d/=10;
            check[d%10]=1;
            d/=10;
            check[d%10]=1;
            d/=10;
            check[d]=1;
            int j,ans=0;
            for(j=0;j<=9;++j){
                if(check[j]==1){
                    ++ans;
                }
            }
            if(ans==4){
                printf("%d\n",i);
                break;
            }
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1297
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

