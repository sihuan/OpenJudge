#include <stdio.h>

int a[59][59];

int load(int ss,int n,int start)
{
    int i;
    for(i=ss;i<n-1;++i)
    {
        a[i][n-1]=start++;
    }
    for(i=n-1;i>ss;--i)
    {
        a[n-1][i]=start++;
    }
    for(i=n-1;i>ss;--i)
    {
        a[i][ss]=start++;
    }
    for(i=ss;i<n-1;++i)
    {
        a[ss][i]=start++;
    }
    return start;
}

int main()
{
    int n;

    while(~scanf("%d",&n))
    {
        int i,j;
    int l=1,aa,ss=0;
    if(n%2!=0) a[n/2+1][n/2+1]=n*n;
    for(i=n;i>=1;--i,++ss)
    {
        aa=load(ss,i,l);
        l=aa;
    }
    if(n%2!=0) a[n/2][n/2]=n*n;
    if(n==0) printf("0\n");

    for(i=0;i<n;++i)
    {
        for(j=0;j<n;++j)
        {
            printf("%d",a[i][j]);
            if(j<n-1) printf(" ");
        }
        puts("");

    }
    puts("");
    }
}

/**************************************************************
	Problem: 1184
	User: 201601160202
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:760 kb
****************************************************************/

