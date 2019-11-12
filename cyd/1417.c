#include <stdio.h>
  int main()
   {    int k=0,sum=0,a;
        double c;

     while(scanf("%d",&a)!= EOF)

        {sum+=a;
        k++;}
        c=sum*1.0/k;
    printf("%.3lf",c);
         return 0;
   }

/**************************************************************
	Problem: 1417
	User: 201901061304
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

