#include<stdio.h>
#include<string.h>

int main()
{
    //freopen("1.txt","r",stdin);
    int n=0,i=0,k=0,m=0,temp=0,sum=0;
    scanf("%d",&n);
    for(k=0;k<n;++k)
    {
        scanf("%d",&m);
        sum=0;
        for(i=0;i<m;++i)
        {
            scanf("%d",&temp);
            sum=sum+temp;
        }
        printf("%d\n\n",sum);
    }
    return 0;
}

/**************************************************************
	Problem: 1045
	User: 201601160202
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

