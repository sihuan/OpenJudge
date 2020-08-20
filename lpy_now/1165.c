#include<stdio.h>

int main(){
    int n,i,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;++i){
        for(j=1;j<=n-i;++j){
            printf(" ");
        }
        k=i%10;
        for(j=1;j<=i*2-1;++j){
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 1165
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

