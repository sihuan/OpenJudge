#include <stdio.h>
#define MAX_STR_LEN 109

int gcd(int a,int b)
{
    return a==0?b:gcd(b%a,a);
}

int main()
{
    int m,n;
    //printf("%d",gcd(11,8));
    while(~scanf("%d/%d",&m,&n))
    {
        int nn=m/n;
        if(nn!=0) m=m-nn*n;
        int xx= gcd(m,n);
        m=m/xx;n=n/xx;
        if(nn==0) printf("%d/%d\n",m,n);
        else if(n==1) printf("%d\n",nn);
        else if(nn!=0) printf("%d+%d/%d\n",nn,m,n);
    }
}

/**************************************************************
	Problem: 1503
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

