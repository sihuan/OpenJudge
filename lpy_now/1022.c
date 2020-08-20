#include<stdio.h>
#define INF 2200000000

int main(){
    int a,b,n,i;
    //scanf("%d",&n);
    int flag=1;
    while(1){
        scanf("%d%d",&a,&b);
        if(a==0 && b==0){
            break;
        }
        if(flag!=1){
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
	Problem: 1022
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

