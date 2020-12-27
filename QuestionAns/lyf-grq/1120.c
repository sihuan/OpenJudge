#include <stdio.h>
#include <stdlib.h>
 
int main()
{
	int n;
	double sum1=0,sum2=0;
	int zheng=0,fu=0;
	while(scanf("%d",&n)!=EOF&&n!=0) 
	{
		if(n>0)
		{
			zheng++;
			sum1+=n;
		}
		else
		{
			fu++;
			sum2+=n;
		}
	  }
	  if(fu!=0)
	  {
	  printf("%d %.2lf\n",fu,sum2/fu);
	  }	
	  else
	  printf("0\n");
	  if(zheng!=0)
	  {
	  printf("%d %.2lf",zheng,sum1/zheng);
	  }
	  else
	  printf("0");
}
/**************************************************************
	Problem: 1120
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

