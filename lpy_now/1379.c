#include<math.h>
#include<stdio.h>

int main(){
    int i,n;
    scanf("%d",&n);
    if(n==1){
        printf("no");
        return 0;
    }
    if(n==2){
        printf("yes");
        return 0;
    }
    for(i=2;i<=sqrt(n);++i){
        if(n%i==0){
            printf("no");
            return 0;
        }
    }
    printf("yes");
    return 0;
}

/**************************************************************
	Problem: 1379
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:756 kb
****************************************************************/

