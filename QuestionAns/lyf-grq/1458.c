#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()

{
   int a[10001];
   int n,i,x,count;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
       scanf("%d",&a[i]);
   while(scanf("%d",&x)!=EOF)
   {
       if(x>n||x<1)
        printf("OUT OF RANGE\n");
       else
        {
       count=1;
       for(i=1;i<=n;i++)
       {
           if(count==x)
           {
               printf("%d\n",a[i]);
               break;
           }
           else
            count++;
       }
   }
    }
}

/**************************************************************
	Problem: 1458
	User: 202001061101
	Language: C
	Result: Accepted
	Time:16 ms
	Memory:748 kb
****************************************************************/

