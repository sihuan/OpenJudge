#include<stdio.h>
#define INF 2200000000

int main(){
    int x,n,maxx=INF,minn=-INF;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&x);
        if(x>maxx){
            maxx=x;
        }
        if(minn>x){
            minn=x;
        }
    }
    printf("The maximum number is %d.\nThe minimum number is %d.",maxx,minn);
    return 0;
}

/**************************************************************
	Problem: 1024
	User: 201901061011
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

