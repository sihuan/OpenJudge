#include <stdio.h>
#include <stdlib.h>
int main()
{
   int n,a,b,i;
   char x,y;
   scanf("%d %c %c %d %d",&n,&x,&y,&a,&b);
   for(i=1;i<=b;i++)
   {
       printf("%d%02d%02d%02d%02d\n",n,x-64,y-64,a,i);
   }
}



/**************************************************************
	Problem: 1425
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

