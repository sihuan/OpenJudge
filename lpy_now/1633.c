#include<stdio.h>

int num[20][20];

int main(){
     int i,j,k;
     for(i=1;i<=14;++i){
        num[i][1]=1,num[i][i]=1;
     }
     for(i=2;i<=14;++i){
        for(j=2;j<=i;++j){
            num[i][j]=num[i-1][j]+num[i-1][j-1];
        }
     }
     int n;
     while(scanf("%d",&n)!=EOF){
        for(i=1;i<=n;++i){
            for(j=1;j<=2*(n-i);++j){
                printf(" ");
            }
            for(j=1;j<=i;++j){
                printf("%4d",num[i][j]);
            }
            printf("\n");
        }
        printf("\n");
     }
     return 0;
}

/**************************************************************
	Problem: 1633
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

