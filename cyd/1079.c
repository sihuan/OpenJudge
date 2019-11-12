#include <stdio.h>
  int main()
  {
      int a,b,c,n;
      scanf("%d",&n);
      while(n--)
      {scanf("%d %d %d",&a,&b,&c);
       if(a+b>c&&a-b<c&&a+c>b&&a-c<b&&b-c<a&&b+c>a )
          printf("YES\n");
        else printf("NO\n");


      }
      return 0;
  }
/**************************************************************
	Problem: 1079
	User: 201901061304
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

