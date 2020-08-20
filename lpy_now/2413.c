#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    //freopen("test.txt","r",stdin);
    int n;
    int num[110];
    int i=0;
    scanf("%d",&n);
    for(i=0;i<n;++i){
        scanf("%d",&num[i]);
    }
    for(i=n-1;i>=0;--i){
        printf("%d",num[i]);
        if(i!=0){
            printf(" ");
        }
    }
    return 0;
}

/**************************************************************
	Problem: 2413
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

