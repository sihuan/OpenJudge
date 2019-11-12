#include <stdio.h>
 int main ()
 {
     int a,b,c,sum,e,d,f;
     scanf("%d %d %d",&a,&b,&c);
     if(a%2==0)
        d=a;
      else
        d=a+1;
       if(b%2==0)
        e=b;
      else
        e=b+1;
       if(c%2==0)
        f=c;
       else
        f=c+1;
       sum=d+e+f;
       printf("%d",sum);

     return 0;


 }

/**************************************************************
	Problem: 1402
	User: 201901061304
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

