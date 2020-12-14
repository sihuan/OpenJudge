#include<stdio.h>

int main(){
    int n,i,flag,ans[50];
    while(scanf("%d",&n)!=EOF){
        flag=0;
        if(n==0){
            printf("0\n");
            continue;
        }
        while(n>0){
            ans[flag]=n%2;
            n/=2;
            ++flag;
        }
        for(i=flag-1;i>=0;--i){
            printf("%d",ans[i]);
        }
        printf("\n");
    }
    return 0;
}

/**************************************************************
	Problem: 1039
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

