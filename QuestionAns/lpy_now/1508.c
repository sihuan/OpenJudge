#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int cmp(const void *a,const void *b){
    return *(int*)a<*(int*)b;
}

int main(){
    int N;
    int i,num[1100];
    while(1){
        scanf("%d",&N);
        if(N==0){
            break;
        }
        for(i=0;i<N;++i){
            scanf("%d",&num[i]);
        }
        qsort(num,N,sizeof(int),cmp);
        if(N%2==1){
            printf("%lg\n",(double)num[N/2]);
        }
        else if(N%2==0){
            printf("%lg\n",(double)(num[N/2-1]+num[N/2])/2);
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1508
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

