#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int a;
   float b,c;
   scanf("%d",&a);
   b=sqrt(a);
   c=b-(int)b;
   if(c==0&&a%2==0&&a>0)
    printf("yes");
   else
    printf("no");
        return 0;
}

/**************************************************************
	Problem: 1403
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:756 kb
****************************************************************/

