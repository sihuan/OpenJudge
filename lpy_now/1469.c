/*#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n%2){
        int sum=0;
        while(n){
            int a=n%10;
            sum+=a;
            n/=10;
            if(a%2==0){
                printf("None");
                return 0;
            }
        }
        if(sum%2==1){
            printf("Odd");
        }
        else{
            printf("None");
        }
    }
    else{
        int sum=0;
        while(n){
            int a=n%10;
            n/=10;
            sum+=a;
            if(a%2!=0){
                printf("None");
                return 0;
            }
        }
        if(sum%2==0){
            printf("Even");
        }

        else{
            printf("None");
        }
    }
    return 0;
}*/
#include<stdio.h>

    int num[210000];

int main(){
    int N;
    scanf("%d",&N);
    int i;
    for(i=1;i<=N;++i){
        int n;
        scanf("%d",&n);
        ++num[n];
    }
    int max=0,maxn=0;
    for(i=0;i<=200000;++i){
        if(num[i]>maxn){
            max=i,maxn=num[i];
        }
    }
    printf("%d",maxn);
    return 0;
}

/**************************************************************
	Problem: 1469
	User: 201901061011
	Language: C
	Result: Accepted
	Time:64 ms
	Memory:1568 kb
****************************************************************/

