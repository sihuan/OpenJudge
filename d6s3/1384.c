#include<stdio.h>

int dg(int n)
{
    if(n==0)
        return 1;
    else
        return n*dg(n-1);
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",dg(n));
}

/**************************************************************
	Problem: 1384
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

