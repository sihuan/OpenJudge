#include <stdio.h>
 int main()
 {
 	int a[1000],i,k,j,m,n;
 	scanf("%d",&m);
 	for(i=1;i<=m;i++)
 	{
 		scanf("%d",&n);
 		for(k=0;k<n;k++)
 		{
 			scanf("%d",&a[k]);
 			
		 }
		 printf("%d",a[0]);
		 for(j=0;j<n-1;j++)
		 {
		 	if(a[j]<a[j+1])
		 	{
		 		printf(" %d",a[j+1]);
		 		
			 }
		 }
		 printf("\n");
	 }
	 return 0;
 	
 }

/**************************************************************
	Problem: 1176
	User: 201901100103
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:748 kb
****************************************************************/

