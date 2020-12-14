#include<stdio.h>
#include<string.h>

int main()
{
    //freopen("1.txt","r",stdin);
    int n=0,i=0,temp=0,sum=0;
    while(scanf("%d",&n)!=0)
    {
        if(n==0) break;
        sum=0;
        for(i=0;i<n;++i)
        {
            scanf("%d",&temp);
            sum=sum+temp;
        }
        printf("%d\n",sum);
    }
    return 0;
}

/**************************************************************
	Problem: 1044
	User: 201601160202
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

