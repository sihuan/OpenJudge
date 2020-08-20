#include<stdio.h>
#define INF 2200000000

int main(){
    int a,b,n,i;
    scanf("%d",&n);
    for(i=0;i<n-1;++i){
        scanf("%d%d",&a,&b);
        printf("%d\n",a+b);
    }
    scanf("%d%d",&a,&b);
    printf("%d",a+b);
    return 0;
}

/**************************************************************
	Problem: 1021
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

