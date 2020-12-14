#include<stdio.h>

int main(){
    int N,i;
    scanf("%d",&N);
    int a,b;
    scanf("%d",&a);
    int maxa,maxb,maxsum;
    for(i=2;i<=N;++i){
        scanf("%d",&b);
        int sum=a+b;
        if(i==2){
            maxsum=a+b,maxa=a,maxb=b;
        }
        if(sum>maxsum){
            maxsum=sum,maxa=a,maxb=b;
        }
        a=b;
    }
    printf("%d + %d = %d",maxa,maxb,maxsum);
    return 0;
}

/**************************************************************
	Problem: 1422
	User: 201901061011
	Language: C
	Result: Accepted
	Time:44 ms
	Memory:748 kb
****************************************************************/

