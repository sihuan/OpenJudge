#include<stdio.h>

void print_graphic(int n){
    int i,j;
    for(i=1;i<=n;++i){
        putchar('*');
    }
    printf("\n");
    for(i=1;i<=(n-2)/2+1;++i){
        for(j=1;j<=n/2-i+1;++j){
            putchar('*');
        }
        for(j=1;j<=i*2-1;++j){
            putchar(' ');
        }
        for(j=1;j<=n/2-i+1;++j){
            putchar('*');
        }
        printf("\n");
    }
    for(i=(n-2)/2;i>=1;--i){
        for(j=1;j<=n/2-i+1;++j){
            putchar('*');
        }
        for(j=1;j<=i*2-1;++j){
            putchar(' ');
        }
        for(j=1;j<=n/2-i+1;++j){
            putchar('*');
        }
        printf("\n");
    }
    for(i=1;i<=n;++i){
        putchar('*');
    }
}

int main()
{
    int num;
    scanf("%d", &num);
    print_graphic(num);
    return 0;
}
/**************************************************************
	Problem: 1276
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

