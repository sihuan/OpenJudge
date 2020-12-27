#include<stdio.h>
#include<math.h>
int main()
{
    int m,n;
    int a[51];
    int sum=0,sum2=0;
    scanf("%d",&m);
    for(int i=1;i<=m;i++)
    {
    	scanf("%d",&a[i]);
    	sum+=a[i];
	}
	while(scanf("%d",&n)!=EOF)
	{
		while(n>sum)
		n=n-sum;
		sum2=a[1];
		for(int i=1;i<=m;i++)
		{
            if(n<=sum2)
			{
                printf("Class %c : %d\n",i+64,a[i]-sum2+n);
                break;
            }
            sum2+=a[i+1];
        }
        sum2=0;
    }
}
/**************************************************************
	Problem: 1248
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

