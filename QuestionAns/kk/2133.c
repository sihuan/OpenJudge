#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    long long int a[100],N,K,sum;
    long long int i,j,k,s,n;
    scanf("%lld",&N);
    for(n=0;n<N;n++)
    {
        i=0;
        scanf("%lld",&K);
        scanf("%lld",&a[0]);
        while(a[i]!=-1)
        {
            sum=0;
            i++;
            scanf("%lld",&a[i]);
        }
        i;
        for(j=i-1;j>=0;j--)
        {
            for(s=i-j-1;s>0;s--)
                a[j]*=K;
            sum+=a[j];

        }
        printf("%lld\n",sum);

    }
}

/**************************************************************
	Problem: 2133
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

