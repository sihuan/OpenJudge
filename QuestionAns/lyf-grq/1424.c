#include <stdio.h>
#include <stdlib.h>
int main()
{
   int n,a,max,count;
   scanf("%d",&n);
       max=n;
       count=1;
    while(scanf(" %d",&a)!=EOF)
          {
              if(a>max)
                {
                max=a;
                count=1;
                }
              else if(a<max)
              {
                max=max;
                count=count;
              }
              else if(max==a)
              {
                  max=max;
                  count++;
              }
          }
          printf("maximum data is %d, whose occurences is %d.",max,count);
}



/**************************************************************
	Problem: 1424
	User: 202001061101
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

