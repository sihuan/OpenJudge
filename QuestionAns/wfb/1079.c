#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=0; i<n; ++i)
	{
	    int a,b,c;
	    scanf("%d%d%d",&a,&b,&c);
		if(a>b-c && a<b+c && b>a-c && b<a+c && c>a-b&& c<a+b)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}

/**************************************************************
	Problem: 1079
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

