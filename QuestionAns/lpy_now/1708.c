#include<stdio.h>
#include<string.h>

struct Node{
    int a,b;
};

int main(){
    struct Node num[1100];
    int N,i,min=1000;
    memset(num,0,sizeof(num));
    scanf("%d",&N);
    for(i=1;i<=N;++i){
        scanf("%d",&num[i].a);
        if(min>num[i].a){
            min=num[i].a;
        }
    }
    for(i=1;i<=N;++i){
        if(num[i].a==min){
            num[i].b=1;
        }
    }
    for(i=1;i<=N;++i){
        if(!num[i].b){
            printf("%d\n",num[i].a);
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1708
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

