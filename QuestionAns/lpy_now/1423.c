#include<stdio.h>

int sum;

int judge(int n){
    while(n>0){
        int a=n%10;
        sum+=a;
        n/=10;
    }
    if(sum%2==0){
        return 0;
    }
    return 1;
}

int main(){
    int n;
    scanf("%d",&n);
    if(n<0){
        n=-n;
    }
    if(n%2==0 && judge(n)==0){
        while(n>0){
            int a=n%10;
            n/=10;
            if(a%2!=0){
                printf("None");
                return 0;
            }
        }
        printf("Even");
        return 0;
    }
    else if(n%2!=0 && judge(n)!=0){
        while(n>0){
            int a=n%10;
            n/=10;
            if(a%2==0){
                printf("None");
                return 0;
            }
        }
        printf("Odd");
        return 0;
    }
    printf("None");
    return 0;
}

/**************************************************************
	Problem: 1423
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

