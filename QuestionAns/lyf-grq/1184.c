#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 51
int main()
{
   int a[max][max]={0};
   int n,i=1,j=1;
   int count=1;
   while(scanf("%d",&n)!=EOF)
   {
   j=n;
   while(count<=n*n)
   {
   		while(i<=n&&a[i][j]==0)
   		{
   			a[i][j]=count;
			   count++;
			   i++;	
	    }
	    while(j>1&&a[i-1][j-1]==0)
	    {
	    	a[i-1][j-1]=count;
	    	count++;
	    	j--;
		}
		while(i>=3&&a[i-2][j]==0)
		{
			a[i-2][j]=count;
			count++;
			i--;
		}
		while(j<=n-2&&a[i-1][j+1]==0)
		{
			a[i-1][j+1]=count;
			count++;
			j++;
		}
   }
   for(i=1;i<=n;i++)
   {
   	   for(j=1;j<=n;j++)
   	   {
		if(j==1)
		printf("%d",a[i][1]);
		else
		printf(" %d",a[i][j]);
		}
		printf("\n");
    }
    printf("\n");
  		memset(a,0,sizeof(a));
  		i=1;j=1;
  		count=1;
}
}


/**************************************************************
	Problem: 1184
	User: 202001061101
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

