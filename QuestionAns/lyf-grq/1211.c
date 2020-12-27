#include<stdio.h>
#include<time.h>
#include <stdlib.h>
int main()
{
   char str[31];
   double m,n;
   while(scanf("%s %lf",&str,&n)!=EOF)
   {
    if(n<0)
          continue;
    else
     {
       if(n<=2880&&n>=0)
          m=n*0.48;
       else if(n>2880&&n<=4800)
          m=1382.4+0.53*(n-2880);
       else if(n>4800)
          m=2400+0.78*(n-4800);
          printf("%s:%.2f\n",str,m);
      }

}
}

/**************************************************************
	Problem: 1211
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

