#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,i,max;
    while(scanf("%d/%d",&m,&n)!=EOF)
    {
        max=1;
        if(m%n==0)
            printf("%d\n",m/n);
        else
        {
            if(m/n==0)
            {
                if(m>n)
                    printf("%d/%d\n",m,n);
                else
                {
                    for(i=2;i<=m;i++)
                {
                    if(m%i==0&&n%i==0)
                        max=i;
                }
                printf("%d/%d\n",m/max,n/max);
                }
            }
            else
            {
                for(i=2;i<=(m%n);i++)
                {
                    if((m%n)%i==0&&n%i==0)
                        max=i;
                }
                printf("%d+%d/%d\n",m/n,(m%n)/max,n/max);
            }
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1503
	User: 202001060915
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

