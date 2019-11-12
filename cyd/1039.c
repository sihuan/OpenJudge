#include<stdio.h>
#define max 100000
int main()
{
    int  n,a[max];
    while(scanf("%d",&n)!=EOF)
    {
        int c=1,b,i=0;
      do {
         c=n%2;
         n=n/2;
          i++;
         a[i]=c;
         }
         while(n!=0);
         for(i;i>0;i--)
        {
            printf("%d",a[i]);
          }
          printf("\n");
       }
    return 0;
}


/**************************************************************
	Problem: 1039
	User: 201901061304
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:1064 kb
****************************************************************/

