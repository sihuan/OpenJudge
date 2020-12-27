#include<stdio.h>
#include<string.h>
int main()
{
    int n,x,c,a[10001]={0},b[1001]={0},k;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        k=1;
        scanf("%d",&x);
        for(int j=1;j<=x;j++)
        {
            scanf("%d",&c);
            a[c]++;
            if(a[c]==1)
            {
              b[k]=c;
              k++;
            }
        }
        printf("%d",b[1]);
        for(int m=2;m<k;m++)
            printf(" %d",b[m]);
        printf("\n");
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
    }
}
/**************************************************************
	Problem: 1176
	User: 202001061101
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:748 kb
****************************************************************/

