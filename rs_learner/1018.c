#include<stdio.h>
int main()
{
   int x,y,z,t;
   scanf("%d%d%d",&x,&y,&z);
   if(x>y)
   {
    t=x;
    x=y;
    y=t;
   }

   if(x>z)
   {
    t=x;
    x=z;
    z=t;
   }
   if(y>z)
   {
    t=y;
    y=z;
    z=t;
   }
   printf("%d %d %d",x,y,z);




    return 0;
}

/**************************************************************
	Problem: 1018
	User: 201801020908
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

