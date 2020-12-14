#include <stdio.h>

int f(int m,int n)
{
    if(m<n) return 0;
    if(m==0) return 1;
    if(n==0) return 1;
    return f(m-1,n-1)+f(m-1,n);

}

int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d",f(m,n));
}

/**************************************************************
	Problem: 2038
	User: 201601160202
	Language: C
	Result: Accepted
	Time:348 ms
	Memory:748 kb
****************************************************************/

