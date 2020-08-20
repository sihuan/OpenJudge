#include<stdio.h>

int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        int sum=0;
        while(1){
            while(n>0){
                int a=n%10;
                n/=10;
                sum+=a;
            }
            if(sum<10){
                break;
            }
            n=sum;
            sum=0;
        }
        printf("%d\n",sum);
    }
    return 0;
}

/**************************************************************
	Problem: 1410
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

