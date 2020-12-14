#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void print(int m,int n){
    int i,j;
    for(i=1;i<=n;++i){
        putchar('*');
    }
    printf("\n");
    for(i=1;i<=m-2;++i){
        putchar('*');
        for(j=1;j<=n-2;++j){
            putchar(' ');
        }
        printf("*\n");
    }
    for(i=1;i<=n;++i){
        putchar('*');
    }
}

int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    print(m, n);
}

/**************************************************************
	Problem: 2416
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

