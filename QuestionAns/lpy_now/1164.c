#include<stdio.h>

int main(){
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
        	printf(" ");
		} 
        for(k=1;k<=i+i-1;k++){
        	printf("+");
		}
        printf("\n");
    }
    return 0;
}
 
/**************************************************************
	Problem: 1164
	User: 201901061011
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

