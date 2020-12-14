#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    int num[11000],i;
    for(i=1;i<=N;++i){
        scanf("%d",&num[i]);
    }
    int check;
    while(scanf("%d",&check)!=EOF){
        for(i=1;i<=N;++i){
            if(num[i]==check){
                printf("%d\n",i);
                break;
            }
            else if(i==N){
                printf("NOT FOUND\n");
            }
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1459
	User: 201901061011
	Language: C
	Result: Accepted
	Time:16 ms
	Memory:748 kb
****************************************************************/

