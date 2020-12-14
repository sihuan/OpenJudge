#include<stdio.h>

int add(int n){
    if(n==1){
        int num;
        scanf("%d",&num);
        return num;
    }
    int a;
    scanf("%d",&a);
    return add(n-1)+a;
}

int main(){
    int N;
    scanf("%d",&N);
    int ans=add(N);
    printf("%d",ans);
    return 0;
}

/**************************************************************
	Problem: 1764
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

