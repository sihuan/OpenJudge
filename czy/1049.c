#include <stdio.h>
#include <math.h>
int temp=0;

int T(int n)
{
    if(n==1)
    {
        temp++;
        return 0;
    }
    if(n%2!=0)
    {
        temp++;
        T(n*3+1);
    }
    if(n%2==0)
    {
        temp++;
        T(n/2);
    }
}

int main()
{
    int i=0,first=0,end=0,sum=0;
    int a[100000]={0};
    while(scanf("%d%d",&first,&end)!=EOF)
    {
        int flag=0;
        if(first>end)
        {
            int uio;
            uio=first;
            first=end;
            end=uio;
            flag=1;
        }
        sum=1;
        for(i=first;i<=end;++i)
    {
        temp=0;
       if(i<100000 && a[i]!=0) temp=a[i];
        else
            {
                T(i);
                if(i<100000) a[i]=temp;
            }
       // printf("%d ",temp);
        if(temp>sum) sum=temp;
    }
    if(flag==1)
    {
            int uio;
            uio=first;
            first=end;
            end=uio;
    }
    printf("%d %d %d\n",first,end,sum);
    }
}

/**************************************************************
	Problem: 1049
	User: 201601160202
	Language: C
	Result: Accepted
	Time:364 ms
	Memory:1076 kb
****************************************************************/

