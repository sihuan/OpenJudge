#include<stdio.h>
#include<time.h>
#include <stdlib.h>
int main()
{
   int a[10001] ,n;
   while(scanf("%d",&n)!=EOF)
   {
       int i=1;
       if(n==0)
       printf("0\n");
       else
       {
           for(i=1;n!=0; )
            {
             a[i]=n%2;
             n=n/2;
             i++;
            }
           for(i=i-1;i>=1;i--)
            printf("%d",a[i]);
            printf("\n");
       }
   }

}

/**************************************************************
	Problem: 1039
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

