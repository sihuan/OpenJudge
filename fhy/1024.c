#include <stdio.h>
int main()
{    int n,a,b,i,max,min;
     scanf("%d",&n);
     scanf("%d",&b);
     max=b;
     min=b;
     for(i=2;i<=n;i++)
     { scanf("%d",&a);
       if(a>=max)
       max=a;
       if(a<=min)
	   min=a ;
	 }
	 printf("The maximum number is %d.\n",max);
	 printf("The minimum number is %d.",min);
	 return 0;
 } 
/**************************************************************
	Problem: 1024
	User: 201901100103
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

