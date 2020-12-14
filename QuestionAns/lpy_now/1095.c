#include<stdio.h>

int i;

int main(){
    int num[50];
    num[0]=1,num[1]=1;
    int N;
    scanf("%d",&N);
    for(i=2;i<=50;++i){
        num[i]=num[i-1]+num[i-2];
    }
    for(i=1;i<=N;++i){
        int mou;;
        scanf("%d",&mou);
        printf("%d\n",num[mou]);
    }
    return 0;
}

/**************************************************************
	Problem: 1095
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

