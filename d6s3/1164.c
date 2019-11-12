#include<stdio.h>

int main()
{
    int n,i,j,h,k;
    scanf("%d",&n);
    for (i=1,j=(n-1);i<=n;i++,j--){
        h=1,k=1;
        while(h<=j){
            printf(" ");
            h++;
        }
        while(k<(2*i-1)){
            printf("+");
            k++;
        }
        printf("+\n");
    }
}

/**************************************************************
	Problem: 1164
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

