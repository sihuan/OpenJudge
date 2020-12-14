#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    int i;
    for(i=0;i<N;++i){
        int n;
        scanf("%d",&n);
        int num[1100],j,flag=1,max;
        for(j=0;j<n;++j){
            scanf("%d",&num[j]);
        }
        max=num[0];
        for(j=0;j<n;++j){
            if(num[j]>max){
                max=num[j];
            }
        }
        printf("Max = %d,Positions =",max);
        for(j=0;j<n;++j){
            if(num[j]==max){
                printf(" %d",j);
            }
        }
        if(i!=n-1){
            printf("\n");
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1934
	User: 201901061011
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

