#include<stdio.h>

int main(){
    int N,i;
    scanf("%d",&N);
    if(N>0){
        for(i=1;i<=N;++i){
            printf("%d",i);
            if(i!=N){
                printf(" ");
            }
        }
    }
    else if(N==0){
        printf("0");
    }
    else{
        for(i=N;i<=-1;++i){
            printf("%d",i);
            if(i!=-1){
                printf(" ");
            }
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1167
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

