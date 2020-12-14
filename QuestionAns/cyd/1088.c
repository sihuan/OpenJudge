
#include <stdio.h>
#include <stdlib.h>
 int main ()
 {   int n,a,b,c,k;
 scanf("%d",&n);
   k=abs(n);
   a=k%10;
   b=k/10;
   c=b%10;

    if(k>=10)
   {
    printf("%d%d",c,a);
   }
    else
        printf("%d",k);
        return 0;






 }

/**************************************************************
	Problem: 1088
	User: 201901061304
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

