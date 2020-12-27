#include<stdio.h>

int main()
{
    int x,a,b,n,k;
	int shu=0;
	int sum=0;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
    	sum=0;
        scanf("%d %d %d",&a,&b,&k);
        for(int j=a;j<=b;j++)
        {
            x=j;
            if(x<0)
                x=x*(-1);
            while(x/10!=0)
            {
                if(x%10==k)
                {
                	goto loop;
                }
                x=x/10;
            }
            if(x==k)
        loop: 	sum=sum+j;
        }
        printf("%d\n",sum);
    }
    return 0;
}
/**************************************************************
	Problem: 1118
	User: 202001061101
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:748 kb
****************************************************************/

