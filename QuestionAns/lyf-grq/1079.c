#include <stdio.h>
#include <stdlib.h>
int main()
{
   int n,i,a,b,c;
   scanf("%d\n",&n);
   for(i=1;i<=n;i++)
   {
       scanf("%d %d %d",&a,&b,&c);
       if(a+b>c&&b+c>a&&a+c>b)
        printf("YES\n");
        else
        printf("NO\n");
   }

}


/**************************************************************
	Problem: 1079
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

