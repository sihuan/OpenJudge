#include <stdio.h>
int main()
{
    int b,a=0,c;
  while(scanf("%d",&b)!=EOF)
  {

       a=a+b;
  }
    if(a<399)
        c=a;
       if(a>=399&&a<899)
        c=0.95*a;
      if(a>=899&&a<2499)
        c=0.9*a;
      if(a>=2499&&a<4899)
        c=0.85*a;
      if(a>=4899)
        c=0.8*a;
  printf("%d.00",c);
    return 0;
}

/**************************************************************
	Problem: 1762
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

