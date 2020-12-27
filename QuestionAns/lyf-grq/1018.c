#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
int paixu(int*a,int*b)
{
	int t;
	if(*a>*b)
	{
		t=*a;
		*a=*b;
		*b=t;
	}
}

int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	paixu(&a,&b);
	paixu(&b,&c);
	paixu(&a,&b);
	printf("%d %d %d",a,b,c);
	
}
/**************************************************************
	Problem: 1018
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

