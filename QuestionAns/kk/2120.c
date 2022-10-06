#include<stdio.h>
int main()
{
    int n;
    int i,j=0;
    int h,m,s;
    long long int sum;
    while(scanf("%d",&n)!=EOF)
    {
        j++;
        sum=0;
        for(i=1;i<=n;i++)
        {
           scanf("%d:%d:%d",&h,&m,&s);
           sum=sum+h*3600+m*60+s;
        }
        printf("Case %d: %lld\n",j,sum);
    }
}

/**************************************************************
	Problem: 2120
	User: 202001060117
	Language: C
	Result: Accepted
	Time:44 ms
	Memory:748 kb
****************************************************************/

