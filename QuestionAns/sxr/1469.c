#include<stdio.h>

int main()
{
    int n,k,i,max=0;
    int a[200005]={0};
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&k);
        a[k]++;
    }
    for(i=0;i<=200000;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    printf("%d",max);
    return 0;
}
/**************************************************************
	Problem: 1469
	User: 202001060915
	Language: C
	Result: Accepted
	Time:68 ms
	Memory:1456 kb
****************************************************************/

