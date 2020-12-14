#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    long n,i,q=0,w=0,e=0,m=0;
   unsigned long long int sum;
//freopen("data.txt","r",stdin);
    while(scanf("%ld",&n)!=EOF)
    {
        sum=0;
        ++m;
        for(i=0;i<n;++i)
        {
            scanf("%ld:%ld:%ld",&q,&w,&e);
            sum=sum+(q*3600)+(w*60)+e;
        }
        printf("Case %d: %llu\n",m,sum);
    }
    return 0;
}

/**************************************************************
	Problem: 2120
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:40 ms
	Memory:800 kb
****************************************************************/

