#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
char PrimeTable[500005];
int main()
{
    #ifdef LOCAL
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int i,j;
    for(i=2; i<500001; ++i)
    {
        PrimeTable[i] = 1;
    }
    int n = sqrt(500000) + 1;
	for(i=2; i<n; ++i)
    {
        if(PrimeTable[i] == 1)
        {
            for(j=i+1; j<=500000; ++j)
            {
                if(j%i == 0)
                    PrimeTable[j] = 0;
            }
        }
    }

    int a,b,is;
    while(scanf("%d%d",&a,&b) != EOF)
    {
        is = 1;
        for(i=a; i<=b; ++i)
        {
            if(PrimeTable[i] == 1)
            {
                printf("%d\n",i);
                is = 0;
            }

        }
        if(is == 1) putchar('\n');
        putchar('\n');
    }
	return 0;
}

/**************************************************************
	Problem: 1179
	User: 201601011420
	Language: C
	Result: Accepted
	Time:696 ms
	Memory:1236 kb
****************************************************************/

