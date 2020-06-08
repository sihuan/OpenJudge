
#include<stdio.h>
int main()
{
   int x,charge;
   scanf("%d",&x);
   charge=100-x;
   int a,b,c,d;
   a=charge/20;
   b=(charge-a*20)/10;
   c=(charge-a*20-b*10)/5;
   d=charge-a*20-b*10-c*5;
   printf("$20 bills: %d\n",a);
   printf("$10 bills: %d\n",b);
   printf(" $5 bills: %d\n",c);
   printf(" $1 bills: %d\n",d);
return 0;
}
/**************************************************************
	Problem: 1013
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

