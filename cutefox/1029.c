#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	unsigned int c,b=1,s=0;
	int i=1,k;
	scanf("%d",&k);
	for(;i<=k;++i)
	{
		c=b;
		b*=i;
		if((double)b/c!=i)
		{
			printf("overflow");
			return 0;
		}
		s+=b;
	}
	printf("%u",s);
	return 0;
}
/**************************************************************
	Problem: 1029
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

