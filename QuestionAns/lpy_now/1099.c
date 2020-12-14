#include<stdio.h>

int main(){
    int num[1100];
    int N,i,j;
    scanf("%d",&N);
    for(i=1;i<=N;++i){
        scanf("%d",&num[i]);
    }
    for(i=1;i<=N;++i){
        for(j=1;j<=N-i;++j){
            if(num[j]>num[j+1]){
                int temp=num[j+1];
                num[j+1]=num[j],num[j]=temp;
            }
        }
    }
    for(i=1;i<=N;++i){
        printf("%d ",num[i]);
    }
    return 0;
}

/**************************************************************
	Problem: 1099
	User: 201901061011
	Language: C
	Result: Accepted
	Time:16 ms
	Memory:748 kb
****************************************************************/

