#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int flag=1;
    long n,k,i=0,start=0,end=0;
    scanf("%ld",&n);
    for(k=1;k<=n;++k)
    {
        scanf("%ld%ld",&start,&end);
        flag=1;
        if(start>end)
        {
            int temp=0;
            temp=start;
            start=end;
            end=temp;
        }
        for(i=start;i<=end;++i)
        {
            if(flag==1)
            {
                printf("%ld",i);
                flag=0;
            }
            else
            {
                printf(" %ld",i);
            }
            if(i==2147483647) break;
        }
        printf("\n\n");
    }

 
    return 0;
}

/**************************************************************
	Problem: 1168
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

