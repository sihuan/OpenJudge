#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main()
{
   int n;
   long m=0,i=0;
   double sum;
   while(scanf("%d",&n)!=EOF)
   {
       ++m;
     /*  sum=pow(2.0,n);
       printf("%g",sum);
       i=log10(sum);*/
       i=n*log10(2);
       printf("Case #%ld: %ld\n",m,i);
   }
   return 0;
}

/**************************************************************
	Problem: 2121
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

