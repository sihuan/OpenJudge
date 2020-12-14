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
        for(i=N;i>=1;--i){
            if(num[i]==check){
                printf("%d\n",i);
                break;
            }
            else if(i==1){
                printf("NOT FOUND\n");
            }
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1460
	User: 201901061011
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:748 kb
****************************************************************/

