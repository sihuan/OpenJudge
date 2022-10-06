#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int s=1,d=1;
    for(i=1;i<=n;i++)
        s*=10;
    for(i=1;i<n;i++)
        d*=10;
    while(d<s)
    {
        if(d*d%s==d)
            printf("%d\n",d);
        d++;
    }
}

/**************************************************************
	Problem: 2130
	User: 202001060117
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

