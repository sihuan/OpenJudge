#include <stdio.h>

int plus(int n,int k)
{
    if(k==0||n==k)
        return 1;
    if(k==1)
        return n;
    if(k>1)
        return plus(n-1,k-1)+plus(n-1,k);
}
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    if(n<k)
        printf("%d",0);
    else if(n==k)
        printf("%d",1);
    else
        printf("%d",plus(n,k));
}

/**************************************************************
	Problem: 2038
	User: 202001060117
	Language: C
	Result: Accepted
	Time:100 ms
	Memory:748 kb
****************************************************************/

