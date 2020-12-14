#include<stdio.h>

int main(){
    int arr[105][105],arra[105][105];
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF && a!=0 && b!=0){
        int i,j;
        for(i=0;i<a;++i){
            for(j=0;j<b;j++){
                scanf("%d",&arr[i][j]);
            }
        }
        int m,n;
        scanf("%d%d",&m,&n);
        for(i=0;i<m;++i){
            for(j=0;j<n;++j){
                scanf("%d",&arra[i][j]);
            }
        }
        if(m==0 && n==0){
            break;
        }
        else if(m==a && n==b){
            for(i=0;i<a;++i){
                for(j=0;j<b;++j){
                    if(!j){
                        printf("%d",arr[i][j]+arra[i][j]);
                    }
                    else{
                        printf(" %d",arr[i][j]+arra[i][j]);
                    }
                }
            printf("\n");
        }
        printf("\n");
        }
        else{
            printf("Not satisfied the definition of matrix addition!\n\n");
        }
    }
    return 0;
}
/**************************************************************
	Problem: 1054
	User: 201901061011
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:760 kb
****************************************************************/

