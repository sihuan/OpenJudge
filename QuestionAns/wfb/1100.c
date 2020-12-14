#include<stdio.h>

int main()
{
	int n;
	int cnt=0;
	scanf("%d",&n);
	n%=7;
	printf("Sun Mon Tue Wen Thu Fri Sat\n");
	int i,j;
	for(i=0; i<n;++i)
	{
		++cnt;
		if(cnt%7==1)
			printf("   ");
		else
			printf("    ");
	}
	for(j=1; j<=30; ++j)
	{
		++cnt;
		if(cnt%7==1)
			printf("%3d",j);
		else
			printf(" %3d",j);
		if(cnt%7==0)
			putchar('\n');
	}
	return 0;
}

/**************************************************************
	Problem: 1100
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

