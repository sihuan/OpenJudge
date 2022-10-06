#include<stdio.h>
int main()
{
    int k,sum=0,a,i;
    double an;
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        scanf("%d",&a);
        sum+=a;
    }
    an=sum/(double)k;
    printf("%.3lf",an);
}
/**************************************************************
	Problem: 1416
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

