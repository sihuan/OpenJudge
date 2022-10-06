#include<stdio.h>
int main()
{
    double a,x;
    int n;
    while(scanf("%lf%d",&a,&n)!=EOF)
    {
        for(int i=0;i<=n;i++)
        {
            if(i==0)
                x=a/2.0;
            else
                x=(x+a/x)/2.0;
        }
        printf("%.3lf\n",x);
    }
}

/**************************************************************
	Problem: 1930
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

