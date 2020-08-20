#include<stdio.h>

int main(){
    //freopen("test data.txt","r",stdin);
    int n;
    int i,j,k;
    int flag=1;
    while(scanf("%d",&n)!=EOF){
        if(flag==1){
            flag=0;
        }
        else{
            printf("\n\n");
        }
        for(i=1;i<n/2+2;++i){
            for(j=1;j<=n/2+1-i;++j){
                printf(" ");
            }
            printf("*");
            if(i==1){
                printf("\n");
                continue;
            }
            for(j=1;j<2*i-2;++j){
                printf(" ");
            }
            printf("*\n");
        }
        for(i=1;i<=n/2;++i){
            for(j=1;j<=i;++j){
                printf(" ");
            }
            printf("*");
            if(i==n/2){
                //printf("\n\n");
                break;
            }
            for(j=1;j<=2*(n/2-i)-1;++j){
                printf(" ");
            }
            printf("*\n");
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1170
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

