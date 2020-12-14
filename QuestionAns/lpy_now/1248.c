#include<stdio.h>

int main(){
    int a[50];
    int m;
    int i;
    scanf("%d",&m);
    int sum=0;
    int n;
    int count=0;
    int t,flag=0;
    for(i=0;i<m;++i){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    while(scanf("%d",&n)!=EOF){
        while(n>sum){
            n-=sum;
        }
        for(i=0;i<m;++i){
            count+=a[i];
            if(count>=n){
                printf("Class %c : %d\n",i+65,n-flag),count=0;
                break;
            }
            flag+=a[i];
        }
        flag=0;
    }
    return 0;
}

/**************************************************************
	Problem: 1248
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

