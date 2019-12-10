#include<stdio.h>

void prspace(int n)
{
    int i=0;
    while(i++<n)
        printf(" ");
}

int main()
{
    int n,i,j=0;
    while(scanf("%d",&n)!=EOF){
        if(j==0)
            j++;
        else
            printf("\n");
        prspace((n/2));
        printf("*\n");
        for(i=1;i<=n/2;i++){
            prspace(n/2-i);
            printf("*");
            prspace(2*i-1);
            printf("*\n");
        }
        for(i-=2;i>0;i--){
            prspace(n/2-i);
            printf("*");
            prspace(2*i-1);
            printf("*\n");
        }
        prspace((n/2));
        printf("*\n");
    }
}
/**************************************************************
	Problem: 1170
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

