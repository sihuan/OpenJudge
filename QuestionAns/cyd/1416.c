#include <stdio.h>
  int main()
   {    int k,sum=0,a,d;
        double c;
    scanf ("%d",&k);
    for (a=1;a<=k;a++)
        {scanf("%d",&d);
        sum+=d;}
        c=sum*1.0/k;
    printf("%.3lf",c);
         return 0;
   }

/**************************************************************
	Problem: 1416
	User: 201901061304
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

