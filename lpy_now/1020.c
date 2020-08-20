#include<stdio.h>
#define INF 2200000000

int main(){
    int a,b;
    int flag=1;
    while(scanf("%d%d",&a,&b)!=EOF){
        if(!flag){
           printf("\n");
        }
        else{
            flag=0;
        }
        printf("%d",a+b);
    }
    return 0;
}

/**************************************************************
	Problem: 1020
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

