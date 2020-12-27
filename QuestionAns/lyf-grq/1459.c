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
       count=1;
       for(i=1;i<=n;i++)
     {
           if(a[i]==x)
           {
               printf("%d\n",count);
               break;
           }
           else
            count++;
           if(count>n)
           { 
              printf("NOT FOUND\n");
  		      break;
	       }
	 }
   }
    
}

/**************************************************************
	Problem: 1459
	User: 202001061101
	Language: C
	Result: Accepted
	Time:16 ms
	Memory:748 kb
****************************************************************/

