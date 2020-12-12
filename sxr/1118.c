#include<stdio.h>

int main()
{
    int m,i,j,a,b,k,n,flag=0,sum=0;
    scanf("%d",&m);
    for(i=1; i<=m; i++)
    {
        scanf("%d %d %d",&a,&b,&k);
        for(j=b; j>=a; j--)
        {
            n=j;
            if(n<0)
                n=n*(-1);
            while(n/10!=0)
            {
                if(n%10==k)
                {
                    flag=1;
                    break;
                }
                n=n/10;
            }
            if(n==k)
                sum=sum+j;
            if(flag!=0)
                sum=sum+j;
            flag=0;
        }
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}

/**************************************************************
	Problem: 1118
	User: 202001060915
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:748 kb
****************************************************************/

