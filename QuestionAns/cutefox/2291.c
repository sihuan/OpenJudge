#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  n,k,a,t,cnt=0;
    scanf("%d",&n);
     scanf("%d",&k);
    a=n;
    if(n!=0)
    while(a!=0)
    {
        t=a%10;
        if(t==k)
            cnt++;
        a=a/10;
    }
    if(n==0&&k==0)
        cnt=1;
    printf("%d",cnt);
    return 0;
}
/**************************************************************
	Problem: 2291
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

