#include<stdio.h>

int main(){
    int N,i;
    int a,b,c;
    scanf("%d",&N);
    for(i=1;i<=N;++i){
        scanf("%d%d%d",&a,&b,&c);
        if(a+b>c && a+c>b && b+c>a){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1079
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

