#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define MAX_SIZE 10009

int input(int *a)
{
    int i=0,temp;
    while(1)
    {
        scanf("%d",&temp);
        if(temp==0) break;
        a[i]=temp;
        ++i;
    }
    return i;
}

int main()
{
   int a[1009],b[1009];
   int l1=input(a);
   int l2=input(b);
   int i,k;
   int sum=0;
   for(i=0;i<l1;++i)
   {
       for(k=0;k<l2;++k)
       {
           if(a[i]==b[k])
           {
               ++sum;
               break;
           }
       }
   }
   int ll;
   if(l1>l2) ll=l1;else ll=l2;
   if(ll==0)
   {
       puts("100.00%");
       return 0;
   }
   double re=((1.0)*sum)/ll*100;
   printf("%0.2lf",re);
   puts("%");
}

/**************************************************************
	Problem: 1935
	User: 201601160202
	Language: C
	Result: Accepted
	Time:20 ms
	Memory:748 kb
****************************************************************/

