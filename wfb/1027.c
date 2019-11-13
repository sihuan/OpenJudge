#include<stdio.h>
int isPrime(int n);
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	printf("=====\n");
	int i;
	for(i=n; i>=m; --i)
	{
		if(isPrime(i))printf("%d\n",i);
	}
	printf("=====\n");

	return 0;
}
int isPrime(int n)
{
	int is = 1;
	if( n<2) is = 0;
	else
	{
	int i;
	for(i=2; i<n; ++i)
		if(n % i == 0)
		{is = 0;break;}
	}
	return is;
}

/**************************************************************
	Problem: 1027
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

