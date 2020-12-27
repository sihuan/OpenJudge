#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
   int k;
   unsigned int sum=0;
   scanf("%d",&k);
   if(k>12)
    printf("overflow\n");
   else
   {
       for(int i=1;i<=k;i++)
        {
           int factorial=1;
       for(int j=1;j<=i;j++)
            factorial*=j;
            sum+=factorial;
        }
    printf("%u\n",sum);
   }
   
  

}

/**************************************************************
	Problem: 1029
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

