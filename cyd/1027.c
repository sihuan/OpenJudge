
#include <stdio.h>
  int main()
  {
   int a,b,m,n,i;
   scanf("%d %d",&m,&n);
   a=n;
   printf("=====\n");
  while(a>=m)
   {
    for(i=2;i<=a;i++)
   {
    if(a%i==0)
    {
    break;
    }
    if(i>=a-1)
    printf("%d\n",a);
    }
    a--;
    }
    if((n>=2)&&(m<=2))
    printf("%d\n",2);
    printf("=====");



      return 0;
  }

/**************************************************************
	Problem: 1027
	User: 201901061304
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

