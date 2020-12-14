#include <stdio.h>
  int main()
   {    int x,a,b,c,d,e;
        scanf("%d",&x);
        a=100-x;
        b=a/20;
        c=(a-(20*b))/10;
        d=(a-(20*b)-(c*10))/5;
        e=a%5;



        printf("$20 bills: %d\n",b);
        printf("$10 bills: %d\n",c);
        printf(" $5 bills: %d\n",d);
        printf(" $1 bills: %d\n",e);








         return 0;

   }

/**************************************************************
	Problem: 1013
	User: 201901061304
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

