#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int flag=1;
    long n,k,i=0,start=0,end=0,sum=0;
    scanf("%ld",&n);
    for(k=1;k<=n;++k)
    {
        scanf("%ld%ld",&start,&end);
        flag=1;
        sum=0;
        if(start>end)
        {
            int temp=0;
            temp=start;
            start=end;
            end=temp;
        }
        for(i=start;i<=end;++i)
        {
            sum=sum+i;
        }
        printf("case %d:sum=%d.\n",k,sum);
    }
    return 0;
}

/**************************************************************
	Problem: 1145
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

