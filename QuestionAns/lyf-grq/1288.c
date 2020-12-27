#include <stdio.h>

int main()
{
   int min,max,q;
   scanf("%d %d %d",&min,&max,&q);
   while(min<=max)
   {
   	printf("%d ",min);
   	min*=q;
   }
}

/**************************************************************
	Problem: 1288
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

