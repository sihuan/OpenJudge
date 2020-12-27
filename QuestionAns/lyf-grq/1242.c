#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   char a[101];
   int n,i,j;
   long long int sum=0,k=1;
   while(scanf("%s",&a)!=EOF)
   {
   	 n=strlen(a);
   	 for(i=0;i<n-1;i++)
   	 {
	  if(a[i]=='1')
	   {
	   	 k=1;
	  	 for(j=1;j<n-i;j++)
	  	 {
		   k=k*2;
		 }
		 sum+=k;
	   } 
	 } 
	 if(a[n-1]=='1')
	 printf("%lld\n",sum+1);
	 else
	 printf("%lld\n",sum);
	 sum=0;
   }
}

/**************************************************************
	Problem: 1242
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

