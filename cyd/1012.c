#include <stdio.h>
 int main()
  {
      int a,b,c,d;
     scanf("%d",&a);
     b=a/100%10;
     c=a/10%10;
     d=a/1%10;
     if(a==b*b*b+c*c*c+d*d*d)
        printf("YES");
     else printf("NO");







    return 0;

  }

/**************************************************************
	Problem: 1012
	User: 201901061304
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

