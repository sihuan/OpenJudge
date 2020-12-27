#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

int main()
{
	int n;
	int i,j,k;
	while(scanf("%d",&n)!=EOF&&n!=0)
	{
		if(n%2==0)
		{
			for(i=1;i<=n;i++)
    	   {
            for(j=1;j<=n-i;j++)
            printf(" ");
            for(int k=1;k<=2*i-1;k++)
            printf("+");
            printf("\n");
      	  }
		}
		else
		{
			for(i=1;i<=n;i++)
			{
				for(j=1;j<=i-1;j++)
				printf(" ");
				for(k=1;k<=2*(n-i+1)-1;k++)
				printf("+");
				printf("\n");
			}
		}
		printf("\n");
	}
}
/**************************************************************
	Problem: 1096
	User: 202001061101
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

