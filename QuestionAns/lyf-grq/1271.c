#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int digit_sum(int num)
{
	int sum=0;
   while(num!=0)
   	   {
	     sum+=num%10;
   	      num=num/10;
       }
   while(sum>=10)
   {
   	    num=sum;
   	    sum=0;
        while(num!=0)
   	   {
	     sum+=num%10;
   	      num=num/10;
       }
   }
   return sum;
}

 



int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", digit_sum(n));
    return 0;
}
/**************************************************************
	Problem: 1271
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

