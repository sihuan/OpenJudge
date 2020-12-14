#include <stdio.h>
#define SWAP(t,a,b) t=a; a=b; b=t;
void readarray(long a[],int n)
{
	int i;
	for(i=0; i<n; ++i)
		scanf("%ld",a+i);
}
void sortArray(long a[],int n)
{
	int i,j;
	long t;
	for(i=0; i<n-1; ++i)
	{
		for(j=i+1; j<n; ++j)
		{
			if(a[i] < a[j])
			{
				SWAP(t,a[i],a[j]);
			}
		}
	}
}
int main()
{
	long a[1005];
	int n;
	double medians;
	while(scanf("%d",&n) && n!=0)
	{
		readarray(a,n);
		sortArray(a,n);
		if(n%2==0)
			medians = 0.5*(a[n/2]+a[n/2-1]);
		else
			medians = a[n/2];
		printf("%lg\n",medians);
	}
	return 0;
}

/**************************************************************
	Problem: 1508
	User: 201601011420
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

