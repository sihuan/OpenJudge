#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int digui(int n)
{
    int a;
    if(n==1||n==0)
        a=1;
    else
        a=n*digui(n-1);
    return a;
}
int main()
{
    int n,result;
    scanf("%d",&n);
    result=digui(n);
    printf("%d",result);
    return 0;
}
/**************************************************************
	Problem: 1384
	User: 201801020908
	Language: C
	Result: Accepted
	Time:16 ms
	Memory:748 kb
****************************************************************/

