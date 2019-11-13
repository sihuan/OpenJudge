#include<stdio.h>

int gcd(int a, int b)
{
    int temp;
     while(b!=0)
  {
     temp=a%b;
     a=b;
     b=temp;
  }
    return a;
}
int main()
{
	int a,b;
	while(scanf("%d%d",&a,&b) != EOF)
	{
		int c=gcd(a,b);
		printf("%d %d\n",c,a/c*b);
	}
	return 0;
}

/**************************************************************
	Problem: 1041
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

