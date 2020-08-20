#include<stdio.h>

int main(){
    int a, b;
    while(scanf("%d%d",&a,&b)!=EOF){
        int c=0,ans=0,i;
        for(i=9;i>=0;i--){
            c=(a%10+b%10+c)>9?1:0;
            ans+=c;
            a/=10;b/=10;
        }
        printf("%d\n",ans);
    }
    return 0;
}

/**************************************************************
	Problem: 1172
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

