#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n,m;
    int max,min;
    scanf("%d%d",&n,&m);
    int a[n];
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(int i=1; i<n; i++)
        for(int j=0; j<n-i; j++)
        {
            int temp;
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    if(m>=n)
        for(int i=n-1; i>=0; i--)
        {
            if(i==n-1)
                printf("%d",a[i]);
            else
                printf(" %d",a[i]);
        }
    else
        for(int i=1; i<=m; i++)
        {
            if(i==1)
                printf("%d",a[n-i]);
            else
                printf(" %d",a[n-i]);
        }
}

/**************************************************************
	Problem: 1567
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

