#include <stdio.h>

int getAns(int n,int k)
{
    if(k == 1) return n;
    else if(k == n) return 1;
    else if(k>n) return 0;
    else if(k> n-k) return getAns(n,n-k);
    else return getAns(n-1,k-1)+getAns(n-1,k);
}
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    printf("%d\n",getAns(n,k));

    return 0;
}

/**************************************************************
	Problem: 2038
	User: 201601011420
	Language: C
	Result: Accepted
	Time:64 ms
	Memory:748 kb
****************************************************************/

