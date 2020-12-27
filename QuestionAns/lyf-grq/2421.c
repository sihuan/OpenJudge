#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,a2,b,t;
   int max,secmax;
   int a[15];
   scanf("%d",&a2);
   scanf("%d",&b);
   if(a2>b)
   {
   	max=a2;
   	secmax=b;
   }
   else if(a2<b)
   {
   	max=b;
   	secmax=a2;
   }
   else if(a2==b)
   {
   	max=b;
   	secmax=0-10000000;
   }
   for(i=3;i<=15;i++)
   {
   	scanf("%d",&a[i]);
   	if(a[i]<secmax)
   	continue;
   	else if(a[i]>max)
   	{
   		t=max;
		max=a[i];
		secmax=t;	
	}
	else if(a[i]>secmax&&a[i]<max)
	{
		secmax=a[i];
	}
   }
   printf("%d",secmax);
}


/**************************************************************
	Problem: 2421
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

