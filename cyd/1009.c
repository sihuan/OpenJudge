#include <stdio.h>
 int main ()
 {
     int m,n,x;
     scanf("%d %d %d",&m,&n,&x);
     double z;
     if(m*x>n)
        z=0.88*m*x;
     else
        z=m*x;
        printf("%.2lf",z);
      return 0;

 }

/**************************************************************
	Problem: 1009
	User: 201901061304
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

