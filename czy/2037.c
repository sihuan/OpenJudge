#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char c,v;
    int x;
    int sum=0,i=0;
    while(~scanf("%d%c",&x,&c))
    {
        ++i;
        if(i==1) sum=x;
        if(i!=1&&v=='+') sum=sum+x;
        if(i!=1&&v=='-') sum=sum-x;
        if(c=='=')
        {
            printf("%d\n",sum);
            i=0;
            sum=0;
        }
        v=c;
    }
    return 0;
}

/**************************************************************
	Problem: 2037
	User: 201601160202
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

