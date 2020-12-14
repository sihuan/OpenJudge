#include <stdio.h>
  int main()
   {    int a,b,c,d;
        int z,x,v,n;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        scanf("%d %d %d",&z,&x,&v);
        n=z+x+v;
        if(z>=a&&x>=b&&v>=c&&n>=d)
            printf("congratulations");
        else printf("sorry");
         return 0;

   }

/**************************************************************
	Problem: 1404
	User: 201901061304
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

