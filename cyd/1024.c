#include  <stdio.h>
int main()
{  int n,a,b,max,min;
   scanf("%d",&n);
   scanf("%d",&b);
   max=min=b;
   for(a=1;a<n;a++)
   {
       scanf("%d",&b);
       if(max<b) max=b;

       if(min>b) min=b;

   }
        printf("The maximum number is %d.\nThe minimum number is %d.",max,min);


    return 0;
}






/**************************************************************
	Problem: 1024
	User: 201901061304
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

