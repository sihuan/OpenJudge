#include<stdio.h>

int main(){
    int m;
    scanf("%d",&m);
    int i,j,k;
    for(j=0;j<(m+1)/2;++j){
        for(i=0;i<(m+1)/2-1-j;i++){
            printf(" ");
        }
        for(k=j;k<j*3+1;++k){
            putchar('A'+k);
        }
        printf("\n");
    }
    for(j=(m+1)/2-2;j>=0;j--){
        for(i=(m+1)/2-2-j;i>=0;--i){
            printf(" ");
        }
        for(k=j;k<j*3+1;k++){
            putchar('A'+k);
        }
        printf("\n");
    }
    return 0;
}

/**************************************************************
	Problem: 1221
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

