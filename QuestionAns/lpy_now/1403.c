#include<stdio.h>

int main(){
    int n,i;
    scanf("%d",&n);
    if(n%2==0 && n>0){
        for(i=1;;++i){
            if(i*i>n){
                printf("no");
                return 0;
            }
            if(i*i==n){
                printf("yes");
                break;
            }
        }
    }
    else{
        printf("no");
        return 0;
    }
}

/**************************************************************
	Problem: 1403
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

