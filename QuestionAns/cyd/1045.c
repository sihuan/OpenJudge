#include<stdio.h>
  int main()
  {
     int a,b,n,i,m,z=1,sum=0;

    scanf("%d",&m);
    while(z<=m)
    {
       scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
        scanf("%d",&a);
        sum+=a;
    }
       printf("%d\n\n",sum);
       sum=0;
       z++;
    }
      return 0;
  }



/**************************************************************
	Problem: 1045
	User: 201901061304
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

