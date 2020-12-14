#include <stdio.h>
int s[1000010]= {0};
int D(int n)
{
    int j=1;
    while(n!=1)
    {
        if(n%2==0)
        {
            n=n/2;
            j++;
        }
        else
        {
            n=n*3+1;
            j++;
        }
    }
    return j;
}
int main()
{
    int n,m,max,a,b,i;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        a=(n<m)?n:m;
        b=(n<m)?m:n;
        for(i=a; i<=b; i++)
        {
            if(s[i]!=0)
                continue;
            s[i]=D(i);
        }
        max=s[a];
        for(i=a+1; i<=b; i++)
        {
            if(max<s[i])
                max=s[i];
        }
        printf("%d %d %d\n",n,m,max);
    }
    return 0;
}
/**************************************************************
	Problem: 1049
	User: 202001060915
	Language: C
	Result: Accepted
	Time:224 ms
	Memory:4652 kb
****************************************************************/

