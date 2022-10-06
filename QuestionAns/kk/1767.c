#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void input(int a[])
{
    int n;
    scanf("%d",&n);
    a[n]++;
}
int judge(int a[],int b[])
{
    int max=0,i=1;
    for(int j=1;j<10000;j++)
    {
        if(max<a[j])
        {
            i=1;
            max=a[j];
            memset(b,0,sizeof(b));
            b[i]=j;
            i++;
            continue;
        }
        if(max==a[j])
        {
            b[i]=j;
            i++;
        }
    }
    b[0]=max;
    return i;
}
int main()
{
    int n;
    int a[10000],b[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        int m,num;
        scanf("%d",&m);
        for(int j=0;j<m;j++)
            input(a);
            num=judge(a,b);
        for(int k=0;k<num;k++)
        {
            if(k==0)
                printf("%d",b[k]);
            else
                printf(" %d",b[k]);
        }
        printf("\n");
    }
}

/**************************************************************
	Problem: 1767
	User: 202001060117
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

