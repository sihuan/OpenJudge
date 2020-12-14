#include<stdio.h>

int main(){
    int a,b,c,n,i;
    while(scanf("%d",&n)!=EOF){
        if(n%2==0){
            for(i=1;i<=n;i++){
                for(a=1; a<=n-i; a++){
                	printf(" ");
				}
                for(b=1; b<=i+i-1; b++){
                	printf("+");
				} 
                printf("\n");
            }
            printf("\n");
        }
        if(n%2!=0){
            for(i=1; i<=n; i++){
                for(a=1; a<i; a++){
                	printf(" ");
				}   
                for(b=(n-i)*2+1; b>0; b--){
                	printf("+");
				}
                printf("\n");
            }
        	printf("\n");
        }
        if (n==0) break;
    }
    return 0;
}
 
/**************************************************************
	Problem: 1096
	User: 201901061011
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

