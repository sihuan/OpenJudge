#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    /*unsigned long long */int b=0,c=0,n=0,i=0,k=0,j=0,m=0,sum=0,min=0,max=0,d=0,kl=0;
    int a[2000];
    scanf("%d",&n);
    for(k=0;k<n;++k)
    {
        scanf("%d%d%d",&min,&max,&d);
        sum=0;
        for(i=min;i<=max;++i)
        {
            m=i;
            j=0;
            while(1)
            {
                if(m/10==0)
                {
                    a[j]=m%10;
                    break;
                }
                else
                {
                    a[j]=m%10;
                    ++j;
                    m=m/10;
                }
            }
            for(kl=0;kl<=j;++kl)
            {
                if(a[kl]==d || a[kl]==-d)
                {
                    sum=sum+i;
                    break;
                }
            }

        }
         printf("%d\n",sum);
    }

    return 0;
}

/**************************************************************
	Problem: 1118
	User: 201601160202
	Language: C
	Result: Accepted
	Time:24 ms
	Memory:748 kb
****************************************************************/

