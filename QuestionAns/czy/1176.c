#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int n=0,sum=0,first=0,end=0,i=0,k=0,j=0;
    scanf("%d",&n);
    int a[1009];

    for(i=0;i<n;++i)
    {
        scanf("%d",&end);
        first=0;
        for(k=0;k<end;++k)
        {
            if(k==0)
            {
                scanf("%d",&a[first]);
                first++;
            }
            else
            {
                int temp;
                scanf("%d",&temp);
                if(a[first-1]==temp)
                {
                    continue;
                }
                else
                {
                    a[first]=temp;
                    first++;
                }
            }
        }
        for(j=0;j<first;++j)
        {
            if(j==0) printf("%d",a[j]);
            else
            {
                printf(" %d",a[j]);
            }
        }
        printf("\n");

    }
}

/**************************************************************
	Problem: 1176
	User: 201601160202
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:748 kb
****************************************************************/

