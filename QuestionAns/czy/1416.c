#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n=0;
    double sum,ave;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;++i)
    {
        sum=sum+a[i];
    }
    ave=sum/(double)n;
    printf("%.3lf\n",ave);
    return 0;
}
/**************************************************************
	Problem: 1416
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

