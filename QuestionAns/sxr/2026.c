#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double p;
    long long m,i;
    while(scanf("%lf",&p)!=EOF)
    {
        int flag=0;
        if(p==61)
        {
            printf("2305843009213693951\n");
            continue;
        }
        else if(p>31)
        {
            printf("no\n");
            continue;
        }
        m=pow(2.0,p)-1;
        for(i=2;i*i<=m;i++)
        {
            if(m%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("%lld\n",m);
        else printf("no\n");
    }
    return 0;
}

/**************************************************************
	Problem: 2026
	User: 202001060915
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:760 kb
****************************************************************/

