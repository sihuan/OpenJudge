#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,N;
   scanf("%d",&N);
   for(i=8;i<=N;i++)
   {
       if(i%3==1&&i%4==2&&i%5==3)
        printf("%d\n",i);
   }
}

/**************************************************************
	Problem: 1275
	User: 202001061101
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

