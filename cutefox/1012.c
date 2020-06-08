#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c,d;
   scanf("%d",&a);
   b=a/100;
   c=a/10%10;
   d=a%100%10;
   if(a==b*b*b+c*c*c+d*d*d)
    puts("YES");
   else
    puts("NO");
    return 0;
}

/**************************************************************
	Problem: 1012
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

