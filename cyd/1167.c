#include <stdio.h>
  int main()
  {
      int n,i;
      scanf("%d",&n);
      if(n==0)
        printf("0");
      else if(n>0)
      {    printf("1");
          for(i=2;i<=n;i++)
          printf(" %d",i);

      }
      else if(n<0)
      {   n=-n;
          printf("%d",-n);
          for(i=n-1;i>=1;i--)
          printf(" %d",-i);
      }

      return 0;


  }

/**************************************************************
	Problem: 1167
	User: 201901061304
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

