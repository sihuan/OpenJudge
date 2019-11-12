#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int flag=1;
    int n,i=0;
    scanf("%d",&n);
    if(n>0)
    {
        for(i=1;i<=n;++i)
        {
            if(flag==1)
            {
                printf("%d",i);
                flag=0;
            }
            else
            {
                printf(" %d",i);
            }
        }
    }
    else if(n==0) printf("0");
    else if(n<0)
    {
        for(i=n;i<=-1;++i)
        {
            if(flag==1)
            {
                printf("%d",i);
                flag=0;
            }
            else
            {
                printf(" %d",i);
            }
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1167
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

