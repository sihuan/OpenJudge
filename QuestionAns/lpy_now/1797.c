#include <stdio.h>

typedef long long ll;

int main(){
    ll n,u,d,ans;
    while(scanf("%lld%lld%lld",&n,&u,&d)){
        if(n==0&&u==0&&d==0)
            break;
        if(u>=n){
            printf("1\n");
        }
        else if(u<=d){
            printf("NEVER!\n");
        }
        else{
            ans=(n-u)/(u-d)*2;
            if((n-u)%(u-d)!=0){
                ans+=2;
            }
            ans++;
            printf("%lld\n",ans);
        }
    }
}

/**************************************************************
	Problem: 1797
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

