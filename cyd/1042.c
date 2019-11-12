#include<stdio.h>
  int main()
  {
     int a,b,n,i,sum=0;
     while(scanf("%d",&n)!=EOF)
    {

     for(i=1;i<=n;i++)
     {
        scanf("%d",&a);
        sum+=a;
    }
       printf("%d\n",sum);
       sum=0;
    }
      return 0;
  }

/**************************************************************
	Problem: 1042
	User: 201901061304
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

