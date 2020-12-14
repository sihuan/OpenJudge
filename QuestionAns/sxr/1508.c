#include <stdio.h>

int main()
{
    int n,i,j,t,flag=0;
    double m;
    double s[1010];
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;
        for(i=0;i<n;i++)
            scanf("%lf",&s[i]);
        for(i=0;i<n-1;i++)
        {
            flag=0;
            for(j=0;j<n-1-i;j++)
            {
                if(s[j+1]>s[j])
                {
                   t=s[j];
                   s[j]=s[j+1];
                   s[j+1]=t;
                   flag=1;
                }
            }
            if(flag==0)
                break;
        }
        if(n%2==0)
            m=(s[n/2]+s[n/2-1])/2.0;
        else
            m=s[(n-1)/2];
        printf("%lg\n",m);
    }
    return 0;
}

/**************************************************************
	Problem: 1508
	User: 202001060915
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

