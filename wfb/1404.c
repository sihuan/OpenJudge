#include<stdio.h>

int main()
{
	int a,b,c,n;
	scanf("%d%d%d%d",&a,&b,&c,&n);
	int a1,b1,c1;
	scanf("%d%d%d",&a1,&b1,&c1);
	int sum = a1+b1+c1;
	if(a1>=a && b1>=b && c1>=c && sum>=n)
		printf("congratulations\n");
	else printf("sorry\n");
	
	return 0;
}
/**************************************************************
	Problem: 1404
	User: 201601011420
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

