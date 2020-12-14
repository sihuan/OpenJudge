#include<stdio.h>

int buchongfu(int i)
{
    int o = i%10;
    int h = i/100;
    int t = i/10%10;
    if(o!=h && o!=t && h!=t)
        return 1;
    else return 0;
}
int sum(int n)
{
	int i;
	int sum=0;
	for(i=100; i<1000; ++i)
	{
		if(i%n==0 &&buchongfu(i))
			sum += i;
	}
	return sum;
}
int main()
{
	int n;
	int i=0;
	while(scanf("%d",&n) != EOF)
	{
		++i;
		printf("case %d:%d\n",i,sum(n));
	}
	return 0;
}

/**************************************************************
	Problem: 1207
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

