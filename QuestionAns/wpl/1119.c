#include <stdio.h>
#include <stdlib.h>


int main()
{
    int N;
   long long int i,x,a[100001]={0};
   long long int min,max;
   long long int m;
   while(scanf("%d",&N)!=EOF)
   {
       if(N==0)
        break;
   for(i=0;i<N;i++)
   {
       scanf("%lld",&x);
       a[i]=x;
   }
   min=a[0];
   for(i=0;i<N;i++)
   {
       if(a[i]<min)
        min=a[i];
   }
   max=a[0];
   for(i=0;i<N;i++)
   {
       if(a[i]>max)
        max=a[i];
   }
   m=(max-min)*2;
   printf("%lld\n",m);
   }
    return 0;
}
/**************************************************************
	Problem: 1119
	User: 201901060819
	Language: C
	Result: Accepted
	Time:52 ms
	Memory:1456 kb
****************************************************************/

