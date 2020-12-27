#include <stdio.h>
#include <stdlib.h>
int main()
{
   int x,y,a,b,c,d;
   scanf("%d",&x);
   y=100-x;
   a=y/20;
   b=(y-20*a)/10;
   c=(y-20*a-10*b)/5;
   d=y-20*a-10*b-5*c;
   printf("$20 bills: %d\n",a);
    printf("$10 bills: %d\n",b);
    printf(" $5 bills: %d\n",c);
    printf(" $1 bills: %d",d);


}







/**************************************************************
	Problem: 1013
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

