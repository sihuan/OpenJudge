#include<stdio.h>

int main()
{
	int k,m,n;
	scanf("%d %d %d",&k,&m,&n);
	int cnt = 0;
	for(int i=1; i<=k; ++i)
	{
		if((i%m==0 && i%n!=0) || (i%m!=0 && i%n==0))
		{
				if(cnt ==0) printf("%d",i);
				else printf(" %d",i);
				++cnt;
		}
	}

	return 0;
}

/**************************************************************
	Problem: 1019
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

