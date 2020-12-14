#include<stdio.h>
int main()
{

   int a,b,i=0,j=0;
   char c;
   while(1)
   {
       scanf("%d",&a);
       getchar();
        if(a!=0)
            i=i+1;
        else
            break;
   }
   c=getchar();
    while(1)
   {
       scanf("%d",&b);
       getchar();
        if(b!=0)
            j=j+1;
        else
            break;
   }
   if(c=='+')
      printf("%d",j+i);
   if(c=='-')
      printf("%d",i-j);



    return 0;
}














/**************************************************************
	Problem: 1475
	User: 201801020908
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

