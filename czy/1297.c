#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    /*unsigned long long */int b=0,c=0,n=0,i=0,m=0,sum=0,min=0,max=0,a=0,d=0;
    //int a[2000];
    while(scanf("%d",&n)!=EOF)
        {
            for(i=n+1;;i++)
            {
              a=i%10;
              b=(i/10)%10;
              c=(i/100)%10;
              d=(i/1000)%10;
              if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
              {
                  printf("%d\n",i);
                  break;
              }
            }

        }

    return 0;
}

/**************************************************************
	Problem: 1297
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

