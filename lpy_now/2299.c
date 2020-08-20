#include<stdio.h>

int main(){
    int n;
    int tot=0;
    scanf("%d",&n);
    if(n==0){
        tot=1;
        printf("%d",tot);
        return 0;
    }
    while(n>0){
        n/=2;
        ++tot;
    }
    printf("%d",tot);
    return 0;
}

/**************************************************************
	Problem: 2299
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

